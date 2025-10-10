#include <iostream>
using namespace std;

int main() {
	
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	cout << endl;
	cout << "Boolean Evaluation Results" << endl;
	
	cout << "Is the number positive? " << (num > 0) << endl;
	cout << "Is the number even? " << (num % 2 == 0) << endl;
	cout << "Is the number between 10 and 50? " << (num > 10 || num < 50) << endl;
	cout << "Is the number positive AND even? " << ((num > 10 || num < 50) && num % 2 == 0) << endl;
	cout << "Is the number positive OR within range? " << ((num > 0) || (num > 10 || num < 50)) << endl;
	cout << "Is the number is not positive? " << (num < 0) << endl;	
	
	return 0;
}
