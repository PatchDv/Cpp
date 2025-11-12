#include <iostream>
using namespace std;

int main(){
	
	string phone[] = {"Apple", "Samsung", "Vivo", "Oppo"};
	
	int size = sizeof(phone) / sizeof(phone[0]);
	
	for(int i = 0; i < size; i++) {
		cout << phone[i] << endl;
	}
	
	return 0;
}
