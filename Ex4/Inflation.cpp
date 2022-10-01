/*
    It is difficult to make a budget that spans several years 
    because prices are not stable. If your company needs 200 pencils per year,
    you cannot simply use this year’s price as the cost of pencils 2 years from now.
    Because of inflation the cost is likely to be higher than it is today.
    Write a program to gauge the expected cost of an item in a specified number of years.
    The program asks for the cost of the item, the number of years from now that the item will be purchased,
    and the rate of inflation. The program the outputs the estimated cost of the item after the specified period.
    Have the user enter the inflation rate as a percentage, like 5.6 (percent). 
    Your program should then convert the percent to a fraction, like 0.056, 
    and should use a loop to estimate the price adjusted for inflation
*/

#include<iostream>

using namespace std;

int main(){
    const int num_of_pencils = 200;

    //cost: the current cost of this item
    //price: the cost of this item after n year
    float inflation_rate, cost, price;
    int num_of_year;

    //ask user the data we need
    cout << "Enter the inflation rate as a percentage, like 5.6 (percent)\n";
    cin >> inflation_rate;

    cout << "please enter the current cost of this item\n";
    cin >> cost;

    cout << "please enter the number of years from now that the item will be purchased\n";
    cin >> num_of_year;

    while(num_of_year > 0){
        price = cost * (1 + (inflation_rate/100));
        cost = price;
        num_of_year--;
    }

    cout << "the price of the item is " << price << endl;
    cout << "the final cost for " << num_of_pencils << " is " << num_of_pencils * price << endl;
    return 0;
}
