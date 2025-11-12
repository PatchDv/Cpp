#include <iostream>
using namespace std;

int main() {
	
	int number = 5;
	
	int fact = 1;
	
	for (int i = 1; i <= number; i++) {
		fact *= i;
	}
	
	cout << "Factorial of " << number << " is " << fact;
	
	
	
	return 0;
}
