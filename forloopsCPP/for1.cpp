#include <iostream>
using namespace std;

int main() {
	
	int even;
	
	int odd;
	
	for (int i = 1; i <= 20; i++){
		
		if (i % 2 == 0){
			even += i;
		} else if(i % 2 != 0){
			odd += i;
		}
	}
	cout << "Sum of even numbers from 1 to 20 is : " << even << endl;
	cout << "Sum of odd numbers from 1 to 20 is : " << odd << endl;
	
	return 0;
}
