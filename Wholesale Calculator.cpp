// Wholesale Calculator


// ARV * Percentage of Profit to Buyer - Rehab - OUR Profit = Offer Price 

#include <cmath>
#include <iostream>

using namespace std; 

int main() {
	// Display Title 
	cout << "Offer Price Calculator\n\n"; 
	
	// Getting User Input - ARV
	// Find Comparable in the area and get that property's price per sqft
	double sqft;
	double price_per_sqft;
	cout << "Enter Property's Square Footage: ";
	cin >> sqft; 
	cout << "Enter Comparables Price Per Sqaure Foot: ";
	cin >> price_per_sqft; 
	cout << "\n\n"; 

	// Caclculate ARV
	double arv = sqft * price_per_sqft; 
	arv = round(arv * 1000) / 1000;		// Round to Two Decimal Places

	cout << "After Repair Value: " << arv << "\n\n"; 

	// Getting User Input - Repair Cost
	char repair_state; 
	double repair_cost; 
	cout << "Enter Level of Repairs Needed (H - Heavy / A - Average / L - Light): "; 
	cin >> repair_state; 

	// Estimating Repair Cost Based on Property Condition 
	switch (repair_state) {

	// Heavy Repairs Needed
	case 'h':
	case 'H':
		if (sqft < 1500) {
			repair_cost = 50000;
		}
		else if (sqft >= 1500 && sqft < 2500) {
			repair_cost = 75000;
		}
		else if (sqft >= 2500 && sqft < 3500) {
			repair_cost = 90000; 
		}
		else if (sqft >= 3500 && sqft < 5000) {
			repair_cost = 100000;
		}
		else {
			repair_cost = 120000; 
		}
		break;

	// Average Repairs Needed
	case 'A':
	case 'a': 
		if (sqft < 1500) {
			repair_cost = 25000;
		}
		else if (sqft >= 1500 && sqft < 2500) {
			repair_cost = 35000;
		}
		else if (sqft >= 2500 && sqft < 3500) {
			repair_cost = 45000;
		}
		else if (sqft >= 3500 && sqft < 5000) {
			repair_cost = 55000;
		}
		else {
			repair_cost = 70000;
		}
		break;

	// Light Repairs Needed
	case 'L':
	case 'l': 
		if (sqft < 1500) {
			repair_cost = 10000;
		}
		else if (sqft >= 1500 && sqft < 2500) {
			repair_cost = 15000;
		}
		else if (sqft >= 2500 && sqft <= 3500) {
			repair_cost = 25000;
		}
		else if (sqft >= 3500 && sqft <= 5000) {
			repair_cost = 30000;
		}
		else {
			repair_cost = 40000;
		}
		break;

	// Default Case
	default:
		repair_cost = 0; 
		break;
	}
	cout << "Estimated Repair Cost: " << repair_cost << endl << endl; 

// Getting User Input - Profit
	double profit; 
	cout << "Enter Desired Profit on Deal: ";
	cin >> profit; 

	double offer_price_70 = ((arv * .70) - repair_cost) - profit; 
	double offer_price_75 = ((arv * .75) - repair_cost) - profit;
	double offer_price_80 = ((arv * .80) - repair_cost) - profit; 

// Displaying Results 
	cout << "\nOffer Price @ 30% Profit For Buyer: " << offer_price_70 << endl; 
	cout << "Offer Price @ 25% Profit For Buyer: " << offer_price_75 << endl; 
	cout << "Offer Price @ 20% Profit For Buyer: " << offer_price_80 << endl; 

}