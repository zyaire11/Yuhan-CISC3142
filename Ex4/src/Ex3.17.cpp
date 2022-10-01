/*
    3.17:Read a sequence of words from cin and store the values a vector. 
    After you’ve read all the words,process the vector and change each word to uppercase.
    Print the transformed elements, eight words to aline.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> vec;

    string word;

     cout << "Enter some word and it will change "
            "each word to uppercase" << endl;

    while (cin >> word)
    {
        vec.push_back(word);
    }

    for (auto &str : vec) {
        for (auto &c : str){
            c = toupper(c);
        }
    }
    int length = vec.size();

    for (int i = 0; i < length; i++)
    {
        cout << vec[i] << endl;
    }
    
return 0;
}   
