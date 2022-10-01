/*
Exercise 3.23: Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = vec.size();

    for (auto it = vec.begin(); it != vec.end(); ++it){
        *it *= 2;
    }

    //it twice its current value
    cout << "{";

    for (int i = 0; i < length; i++){
        cout << vec[i] << " ";
    }
    cout << "}";

return 0;    
}
