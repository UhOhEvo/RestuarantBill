// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: Lab01_01
Project Name: Restuarant Bill
File Name: RestuarantBill.cpp
Description: Calculate the tax and tip of a dinner bill
Limitations or issues: Fixed values only, no user input
Credits:
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{
	// Local variable declarations placed here
	double meal = 44.5;
	double tax = 0.0675;
	double tip = 0.15;	
	double afterTax, total, taxAmount, tipAmount;

	// Calculations
	taxAmount = tax * meal;
	afterTax = meal + taxAmount;
	tipAmount = tip * afterTax;
	total = tipAmount + afterTax;

	// Output to console
	cout << "This program calculates a total meal charge." << endl << endl;

	// Tell customer total of bill
	cout << "Your meal charge is: $" << meal << endl;

	// Tell customer tax on bill
	cout << "Your tax amount is: $" << taxAmount << endl;

	// Tell customer tip
	cout << "Your tip amount is: $" << tipAmount << endl;

	// tell customer total
	cout << "Your total bill is: $" << total << endl;

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);
}


// PROOF
// Program output copied into the below comment section
/*
This program calculates a total meal charge.

Your meal charge is: $44.5
Your tax amount is: $3.00375
Your tip amount is: $7.12556
Your total bill is: $54.6293
Press any key to continue . . .
*/