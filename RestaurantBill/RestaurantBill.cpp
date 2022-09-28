// Aidan Floyd	
// Date: 08/26/2022
//RestarauntBill
// Program Description: This program calculates the total food bill with tip and tax

#include <iostream>
#include <string>


using namespace std;

// Named constants
//declare constants outside of the main function here.
//vv
const double TAX_PERCENT = 0.095;
//^^
int main()
{

	// Variable declaration
	double foodBill;
	double tip;
	double tax;
	double totalBill;

	//Program title and description for the user
	cout << "Program Title: RestaurantBill" << endl;
	cout << "Program Description: This program calculates the total food bill with tip and tax" << endl;


	// User input
	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> foodBill;
	cout << endl; 

	cout << "Choose your tip" << endl; 

	cout << "for 10% tip : $" << 0.1 * foodBill << endl; 
	cout << "for 15% tip : $" << 0.15 * foodBill << endl;
	cout << "for 20% tip : $" << 0.2 * foodBill << endl;

	cin >> tip;
 
	// Calculations 
	tax = foodBill * TAX_PERCENT;
	totalBill = foodBill + tip + tax;

	// Output to the screen

	cout << " your food bill is $" << foodBill;
	cout << " Tip.................." << tip;
	cout << " Tax.................." << tax;
	cout << " Your total bill is $" << totalBill;
	cout << " Thank You!" << endl; 

	return 0;
}