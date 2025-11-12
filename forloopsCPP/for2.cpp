#include <iostream>
using namespace std;

main() {
	
	int count;
	
	for (int i = 1; i < 100; i++){
		
		if (i % 3 == 0 && i % 5 == 0){
			//cout << i << endl;
			count++;
		}
		
	}
	cout << "Numbers divisible by 3 and 5: " << count << endl;
	
	return 0;
}
