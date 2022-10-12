/*
Exercise 4.5: Determine the result of the following expressions.
(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4
*/

#include <iostream>

using namespace std;

int main() {
    cout << "the answer of -30 * 3 + 21 / 5 is " << -30 * 3 + 21 / 5 << "\n";
    cout << "the answer of -30 + 3 * 21 / 5 is " << -30 + 3 * 21 / 5 << "\n";
    cout << "the answer of 30 / 3 * 21 % 5 is " << 30 / 3 * 21 % 5 << "\n";
    cout << "the answer of -30 / 3 * 21 % 4 is " << -30 / 3 * 21 % 4 << "\n";

return 0;    
}

/*
output:
the answer of -30 * 3 + 21 / 5 is -86
the answer of -30 + 3 * 21 / 5 is -18
the answer of 30 / 3 * 21 % 5 is 0
the answer of -30 / 3 * 21 % 4 is -2
*/
