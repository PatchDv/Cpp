#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, add, sub, multi, div, mod;
	
	cout << "Enter a first number: ";
	cin >> num1;
	
	cout << "Enter a first number: ";
	cin >> num2;
	
	add = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	cout << endl;
	cout << "Result: " << endl;
	
	cout << "Addition (+): " << add << endl;
	cout << "Subtraction (-): " << sub << endl;
	cout << "Multiplication (*): " << multi << endl;
	cout << "Division (/): " << div << endl;
	cout << "Modulus (%): " << mod << endl;
	
	
	
	return 0;
}
