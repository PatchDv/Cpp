#include <iostream>
using namespace std;

int main() {
	
	string fName, lName;
	char mName;
	
	
	cout << "Enter your First Name: ";
	cin >> fName;
	
	cout << "Enter your Middle Initial: ";
	cin >> mName;
	
	cout << "Enter your Last Name: ";
	cin >> lName;
	
	cout << "Full Name: " << fName << " " << mName << " " <<lName << endl;
	cout << "Is your name shorter (<=5) each? " << (fName.length() <= 5 && lName.length() <= 5 ) << endl;
	cout << "Do your first and last names start with the same letter? " << (fName[0] == lName[0]) << endl;
	cout << "Your initials: " << char(toupper(fName[0])) << char(toupper(mName))<< char(toupper(lName[0])) << endl;
	
	
	
	return 0;
}
