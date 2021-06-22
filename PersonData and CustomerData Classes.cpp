/*James Garcia
COSC-1437
11.19.2020
PersonData and CustomerData*/

// Header Files
#include <iostream>
#include <string>

using namespace std;

// Superclass PersonData 
class PersonData {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    string phone;
public:
    PersonData();
    string getFirstName();
    string getLastName();
    string getAddress();
    string getCity();
    string getState();
    int getZip();
    string getPhone();
    void setFirstName(string nFirstName);
    void setLastName(string nLastName);
    void setAddress(string nAddress);
    void setCity(string nCity);
    void setState(string nState);
    void setZip(int nZip);
    void setPhone(string nPhone);
};

// Constructor
PersonData::PersonData() {
    lastName = "Lovelace";
    firstName = "Ada";
    address = "123 Street";
    city = "Houston";
    state = "Texas";
    zip = 00000;
    phone = "0000000000";
}

// Accessor Functions for PersonData
string PersonData::getFirstName() { // First Name
    return firstName;
}

string PersonData::getLastName() {  // Last Name
    return lastName;
}

string PersonData::getAddress() {   // Address
    return address;
}

string PersonData::getCity() {  // City
    return city;
}

string PersonData::getState() { // State
    return state;
}

int PersonData::getZip() {  // Zip
    return zip;
}

string PersonData::getPhone() { // Phone Number 
    return phone;
}

// Mutator Functions for PersonData
void PersonData::setFirstName(string nFirstName) {  // First Name
    firstName = nFirstName;
}

void PersonData::setLastName(string nLastName) {    // Last Name
    lastName = nLastName;
}

void PersonData::setAddress(string nAddress) {  // Address 
    address = nAddress;
}

void PersonData::setCity(string nCity) {    // City 
    city = nCity;
}

void PersonData::setState(string nState) {  // State
    state = nState;
}

void PersonData::setZip(int nZip) { // Zip Code
    zip = nZip;
}

void PersonData::setPhone(string nPhone) {  // Phone Number
    phone = nPhone;
}

// Subclass of PersonData: CustomerData
class CustomerData : public PersonData {
private: 
    int customerNumber;
    bool mailingList;
public: 
    CustomerData();
    int getCustomerNumber();
    bool getMailingList();
    void setCustomerNumber(int nCustomerNumber)
    void setMailingList(bool nMailingList);
};

// Constructor
CustomerData::CustomerData() {
    customerNumber = 0;
    bool mailingList = false;
}

// Accessor Functions for Customer Data
int CustomerData::getCustomerNumber() { // Customer Number
    return customerNumber;
}

bool CustomerData::getMailingList() {   // Mailing List
    return mailingList;
}

// Mutator Functions for Customer Data 
void CustomerData::setCustomerNumber(int nCustomerNumber) { // Customer Number 
    customerNumber = nCustomerNumber;
}

void CustomerData::setMailingList(bool nMailingList) {  // Mailing List 
    mailingList = nMailingList;
}


int main() {
    // Displaying Title 
    cout << "Customer Registration Program\n\n\n";

    // Creating First Object
    cout << "Creating Object and Setting to Default Values...";
    CustomerData obj1;
    cout << "Success!!\nNow Displaying Current Values: \n\n";

    // Displaying First Object with Default Values 
    cout << "Last Name: " << obj1.getLastName();
    cout << "\nFirst Name: " << obj1.getFirstName();
    cout << "\nAddress: " << obj1.getAddress();
    cout << "\nCity: " << obj1.getCity();
    cout << "\nState: " << obj1.getState();
    cout << "\nZip Code: " << obj1.getZip();
    cout << "\nPhone: " << obj1.getPhone();
    cout << "\nCustomer Number: " << obj1.getCustomerNumber();
    cout << "\nMailing List: ";
    if (obj1.getMailingList() == true) // Conditional Statement to print Yes or No 
    {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    cout << endl << endl;

    // Initializing Variables to Store User Input 
    string UserLastName;
    string UserFirstName;
    string UserAddress;
    string UserCity;
    string UserState;
    int UserZip;
    string UserPhone;
    int UserCustomerNumber;
    char UserYesOrNo;
    bool UserMailingList;

    // Creating Second Object 
    cout << "Creating Another Object and Loading Input Program...\n\nSuccess!";

    CustomerData obj2;  // Second Object

    // Getting User Input for Last Name
    cout << "\n\nPlease Enter Last Name: ";
    cin >> UserLastName;
    cin.ignore(100, '\n');  // Ignore User New Line 
    obj2.setLastName(UserLastName); // Running User Input through Mutator Function 

    // Getting User Input for First Name
    cout << "\nPlease Enter First Name: ";
    cin >> UserFirstName;
    cin.ignore(100, '\n');  // Ignore User New Line
    obj2.setFirstName(UserFirstName);   // Running User Input through Mutator Function 

    // Getting User Input for Address
    cout << "\nPlease Enter Address: ";
    getline(cin, UserAddress);
    obj2.setAddress(UserAddress);   // Running User Input through Mutator Function

    // Getting User Input for City
    cout << "\nPlease Enter City: ";
    getline(cin, UserCity);
    obj2.setCity(UserCity); // Running User Input through Mutator Function

    // Getting User Input for State
    cout << "\nPlease Enter State: ";
    getline(cin, UserState);
    obj2.setState(UserState);   // Running User Input through Mutator Function

    // Getting User Input for Zip Code
    cout << "\nPlease Enter Zip Code: ";
    cin >> UserZip;
    cin.ignore(100, '\n');  // Ignore User New Line
    obj2.setZip(UserZip);   // Running User Input through Mutator Function

    // Getting User Input for Phone
    cout << "\nPlease Enter Phone: ";
    getline(cin, UserPhone);
    obj2.setPhone(UserPhone);   // Running User Input through Mutator Function

    // Getting User Input for Customer Number
    cout << "\nPlease Enter 3 Digit Customer Number: ";
    cin >> UserCustomerNumber; 

    while (UserCustomerNumber > 999 || UserCustomerNumber < 100) {  // Validating User Input 
        cout << "Error! Customer Number Must Be 3 Digits\n\nPlease Enter Valid Number: ";
        cin >> UserCustomerNumber;
    }
    obj2.setCustomerNumber(UserCustomerNumber)7; // Running User Input through Mutator Function

    // Getting User Input for Mailing List 
    cout << "Would You Like To Join Our Mailing List? (y/n): ";
    cin >> UserYesOrNo;
    while (UserYesOrNo != 'y' && UserYesOrNo != 'n') {  // Validating User Input 
        cout << "Error! Must Enter Valid Answer.\nPlease Enter y for Yes or n for No: ";
        cin >> UserYesOrNo;
    }
    if (UserYesOrNo == 'y') {   // Conditional Statement to set Value to True
        UserMailingList = true;
    }
    else {  // Conditional Statement to set Value to False
        UserMailingList = false;
    }
    obj2.setMailingList(UserMailingList);   // Running User Input through Mutator Function

    // Displaying Second Object with User Values
    cout << endl << endl;
    cout << "Displaying Object with User Values: \n\n";
    cout << "\nLast Name: " << obj2.getLastName();  // Last Name   
    cout << "\nFirst Name: " << obj2.getFirstName();    // First Name
    cout << "\nAddress: " << obj2.getAddress(); // Address
    cout << "\nCity: " << obj2.getCity();   // City
    cout << "\nZip: " << obj2.getZip(); // Zip Code
    cout << "\nPhone: " << obj2.getPhone(); // Phone Number
    cout << "\nCustomer Number: " << obj2.getCustomerNumber();  // Customer Number
    cout << "\nMailing List?: "; 
    if (obj2.getMailingList()) { // Conditional Statement to Display "Yes" or "No" Depending on User Input 
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    cout << endl << endl;
    cout << "Good Bye!";

}