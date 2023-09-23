#include <iostream>
using namespace std;

int main()
//input from user display factorial 
{
	int factorial = 1, number;
	cout  << "number is";
	cin >> number;
	for (int i=1; i<=number; i++){
	  factorial*=1;
   	  cout << "factorial is" << factorial << endl;
	} 
	return 0;
}
