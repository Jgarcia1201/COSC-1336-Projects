// Preprocessing Directives

#include <iostream>
#include <cmath>

using namespace std;

int main() 

{
// Outputting Title of Program
  cout << "Paycheck Calculator" << endl << endl;

// Prompting User for Hours Worked 
  double hours_worked;
  cout << "Hours Worked:    ";
  cin >> hours_worked;
  cin.ignore(100, '\n');
  
// Prompting User For Pay Rate 
  double pay_rate;
  cout << "Hourly Pay Rate: ";
  cin >> pay_rate;
  cout << endl << endl;

// Calculations & Rounding
  double tax_rate;
  tax_rate = 18;
  
  double gross_pay;
  gross_pay = hours_worked * pay_rate;
  
  double round_gross_pay = round(gross_pay * 100) / 100;          // Rounding
  
  double tax_amount;
  tax_amount = gross_pay * (tax_rate/100);
  
  double round_tax_amount = round(tax_amount * 100) / 100;        // Rounding
  
  double take_home_pay;
  take_home_pay = gross_pay - tax_amount;
  
  double round_take_home_pay = round(take_home_pay * 100) / 100; 
  
// Outputting Results 
  
  cout << "Gross Pay:        " << round_gross_pay << endl;
  cout << "Tax Rate:         " << tax_rate << "%" << endl;
  cout << "Tax Amount:       " << round_tax_amount << endl; 
  cout << "Take Home Pay:    " << round_take_home_pay << endl;
  
  
    return 0;
}
