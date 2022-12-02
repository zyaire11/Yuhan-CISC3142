#include <iostream>
using namespace std;

int main(){

    int a = 3;
    int b = 5;

    auto add = [](int a, int b){return a + b;};

    int sum = add(a,b);
    cout << sum << endl;
}
