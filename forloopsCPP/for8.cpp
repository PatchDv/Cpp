#include <iostream>
using namespace std;

int main() {
	
	int result;
	
	cout << "Odd numbers: ";
	
	for (int i = 1; i <= 30; i++) {
		
		if (i % 2 != 0) {
			cout << i << " ";
			result += i;
		}
	}
	cout << endl;
	
	cout << "Sum of odd numbers: " << result << endl;
	
	return 0;
}
