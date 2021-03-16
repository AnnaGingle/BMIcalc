// ConsoleApplicationBMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	//declare variables
	int height = 0;
	int weight = 0;
	int BMI = 0;
	char choice;

	//Introduction
	cout << "Welcome!: ";
	cout << "This is a c++ program that calculates your Body Mass Indicator ";
	cout << "Would you like to continue?(Y/N) " << endl;
	cin >> choice;
	//If the user selects yes then continue the program
	if (choice == 'y', 'Y') {
		//Get height/weight from user
		cout << "Please enter your height in inches: ";
		cin >> height;
		cout << "Please enter your weight in pounds: ";
		cin >> weight;
		//Calculate the user's BMI from input
		BMI = (weight * 703) / (height * height);
		if (BMI < 18.5)
			cout << "Your Body Mass Index is " << BMI << " and according to cdc.gov, you are underweight" << endl;

		else if ((BMI > 18.5) && (BMI < 24.9))
			cout << "Your Body Mass Index is " << BMI << " and according to cdc.gov, this is a normal weight." << endl;

		else if ((BMI > 25) && (BMI < 29.9))
			cout << "Your Body Mass Index is " << BMI << " and according to cdc.gov, this is considered overweight. Please see a health counselor or fitness trainer to discuss your options." << endl;

		else
			cout << "Your Body Mass Index is " << BMI << " and according to cdc.gov, this is considered Obese. Please see a health counselor or fitness trainer to discuss your options." << endl;
	}
	//Display goodbye if the user exists
	else if (choice == 'n', 'N')
	{
		cout << "Goodbye ";
	}
	else {
		cout << "Invalid input... Goodbye ";
	}
	

	return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
