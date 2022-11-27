#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <math.h>
using namespace std;

int main() {
     vector<string> vecMonth;
     vector<int> vecTemp;

    ifstream input("weather.csv.txt");
    ofstream output;
    
    string firstLine;
    getline(input,firstLine);

    string month;
    string temp;

    while (input.good()) {
        getline(input,month,',');
        getline(input,temp,'\n');
        vecMonth.push_back(month);
        vecTemp.push_back(stoi(temp) ); // convert string to int
    }

    //Simple average across all months in the data(9 months)
    vector<int> simpleAver;
    int lengthOfVec = vecTemp.size();

    for (int i = 0; i < lengthOfVec; i++) {
        int simpleAverage;
        int sumOfTemp;
        sumOfTemp = accumulate(vecTemp.begin(), vecTemp.begin()+i+1, 0);
        simpleAverage = (sumOfTemp / (i+1));
        simpleAver.push_back(simpleAverage);
    }

    output.open("output file.txt");
    output << firstLine << ",simpleAverage" << endl;
    for (int i = 0; i < lengthOfVec; i++) {
        output << vecMonth[i] << "," << vecTemp[i] << "," << simpleAver[i] << endl;
    }

    output << "\n\n";//Separation line
    //Moving average across 3 months

    vector<int> movingAver;
    for (int i = 2; i < lengthOfVec; i++) {
        int sum;
        int ave;
        sum = vecTemp[i-2] +vecTemp[i-1] + vecTemp[i];
        ave = round(sum / 3.0);
        movingAver.push_back(ave);
    }
    output << firstLine << ",Moving average" << endl;
    for (int i = 0; i < 2; i++) {
        output << vecMonth[i] << "," << vecTemp[i] << "," << endl;
    }
    for (int i = 2; i < lengthOfVec; i++) {
        output << vecMonth[i] << "," << vecTemp[i] << "," << movingAver[i-2] << endl;
    }

    output << "\n\n";//Separation line
    //Weighted moving average across 3 months
    vector<double> weightedAve; 
    for (int i = 2; i < lengthOfVec; i++) {
        int sum2;
        double ave2;
        sum2 = vecTemp[i-2] *(i-1) +vecTemp[i-1] * i + vecTemp[i] * (i+1);
        ave2 = sum2 / double(3 * i);
        weightedAve.push_back(ave2);
    }

    output << firstLine << ",Weighted moving average" << endl;
    for (int i = 0; i < 2; i++) {
        output << vecMonth[i] << "," << vecTemp[i] << "," << endl;
    }
    for (int i = 2; i < lengthOfVec; i++) {
        output << vecMonth[i] << "," << vecTemp[i] << "," << weightedAve[i-2] << endl;
    }    

    return 0;
}
