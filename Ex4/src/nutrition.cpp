/*
    A government research lab has concluded that an artificial sweetener 
    commonly used in diet soda pop will cause death in laboratory mice. 
    A friend of yours is desperate to lose weight but cannot give up sodapop. 
    Your friend wants to know how much diet soda pop it is possible to drink without 
    dying as a result.Write a program to supply the answer. The input to the 
    program is the amount of artificial sweetener needed to kill a mouse (use 5 grams), 
    the mass of the mouse (use 35 grams), and the weight of the dieter(use 45400 grams for a 100 pound person).
    Assume that the lethal dose for a mouse is proportional to the lethal dose for the human.
    A single can of soda pop has a mass of 350 grams. 
    To ensure the safety of your friend, be sure the program requests the weight at which the dieter will stop dieting,
    rather than the dieter’s current weight.Assume that diet soda contains 1/10th of 1% artificial sweetener.
    Use a variable declaration with the modifier const to give a name to this fraction.
    You may want to express the percent as the double value 0.001. Your program should allow the calculation to be repeated as often as the user wishes
*/

#include<iostream>
using namespace std;

int main(){
    //diet soda contains 1/10th of 1% artificial sweetener.
    const float SODA_PERCENT = 0.001;
    //A single can of soda pop has a mass of 350 grams.
	const float SODA_WEIGHT = 350.0;
    //the amount of artificial sweetener needed to kill a mouse (use 5 grams)
    float mouseDeath;
    //the mass of the mouse(use 35 grams)
    float mouseMass;
    // the weight at which the dieter will stop dieting(use 45400 grams)
    float dieterWeight;
    //Maximum artificial sweetener dosage for one person
    float maxSweetener;
    //Artificial sweetener weight in a bottle of soda
	float sweetenerInSoda;
    int numOfSoda;
    
	cout << "How many artificial sweetener doses are needed to kill a mouse(use 5 grams): ";
	cin >> mouseDeath;
	cout << "How much did the mouse weigh?(use 35 grams): ";
	cin >> mouseMass;
	cout << "How much weight dieters stop dieting(use 45400 grams): ";
	cin >> dieterWeight;
	
    //Maximum artificial sweetener dosage for one person
	maxSweetener = (dieterWeight * (mouseDeath / mouseMass));
	sweetenerInSoda = SODA_PERCENT * SODA_WEIGHT;
    numOfSoda = maxSweetener / sweetenerInSoda;
	cout << "You can drink " << numOfSoda << " cans of soda and not die.\n";

	return 0;
}
