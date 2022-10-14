/*
Linear Regression 
Write a program that reads a file containing a pair of numbers in each line
(representing x y coordinates);at the end of reading this file compute the 
linear regression for this set of numbers.Please use to the linear regression
 formulas mentioned in class (if you missed class, find a classmate to get notes)
*/


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<double> x;
    vector<double> y;

    fstream newfile;
    newfile.open("point.txt",ios::in); 

    double num;

    while(newfile >> num){      
        x.push_back(num);
        newfile >> num;
        y.push_back(num);
    }

    double sumX, sumY;
    const int length = x.size();

    for (int i = 0; i < length; i++){
        sumX = sumX + x[i];    
        sumY = sumY + y[i];
    }
    
    double meanX = sumX / length;
    double meanY = sumY /length;
    // sum1 = ∑(Xi−X¯)2 and sum2 = ∑(Xi−X¯)(yi-y¯)
    double sum1 = 0, sum2 = 0;

    //Formulas: y=b0 + b1 * x
    for (int j = 0; j < length; j++)
    {
        // sum1 = ∑(Xi−X¯)2
        sum1 += (x[j] - meanX) * (x[j] - meanX);
        //sum2 = ∑(Xi−X¯)(yi-y¯)
        sum2 += (x[j] - meanX) * (y[j] - meanY);
    }
    //b1 is slope, b0 is intercept
    double b1 = sum2 / sum1;
    double b0 = meanY - b1 * meanX;
    
    cout << "The regression equation is y = " << b0 << " + " << b1 << "x" << endl;
return 0;    
}
