#include <iostream>
using namespace std;

int main() {
	/*
	for (int i = 1; i <= 5; i++){
		
		for (int j = 1; j <= i; j++){
			cout << "*";
		}
		
		cout << endl;
	}
	*/
	
	int rows = 5;
	int col = 5;
	string icon = "M";
	
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= col; j++) {
			cout << icon;
		}
		cout << endl;
	}
	
	return 0;
}
