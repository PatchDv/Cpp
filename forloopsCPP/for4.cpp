#include <iostream>
using namespace std;

int main() {
	
	int sum;
	
	for (int i = 1; i < 50; i++){
		
		if (sum < 50) {
			sum += i;
			cout << "i = " << i << 	", sum = " << sum << endl;
		}
	}
	
	
	
	return 0;
}
