/*
Prime Numbers
Write a program that finds and prints all the prime numbers between 3 and 100. 
A prime number is a number such that 1 and itself are the only numbers that evenly divide it 
(for example, 3, 5, 7, 11, 13, 17,...).
*/

#include <iostream>

using namespace std;

int main() {
    int startNumber, endNumber;
    cout << "Enter a range to find all prime numbers between two numbers\n";
    cout << "Enter the Starting Number: ";
    cin >> startNumber;
    cout << "Enter the Ending Number: ";
    cin >> endNumber;
    cout << endl;

    int count = 0; // The number of factors does not include 1 and itself

    for (int i = startNumber; i <= endNumber; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }           
        }
        if (count == 0 && i != 1)
        {
            cout << i << endl;
        }
        count = 0;
    }
    cout << endl;
    return 0;    
}

/*
output:
Enter a range to find all prime numbers between two numbers
Enter the Starting Number: 3
Enter the Ending Number: 100

3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
