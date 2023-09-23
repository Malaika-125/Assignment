#include <iostream>
using namespace std;
// display all odd number 1 to 10 using for loop

int main(){
	int product = 1;
	for (int i=1; i<=10; i=i+2){
		product*=i;
		cout << "old number is"<< i << "   " << "product is" << product << endl;
	}
	return 0;
}
