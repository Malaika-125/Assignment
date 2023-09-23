#include <iostream>
using namespace std;

int main()
//input table number and length of table and than display the table using for loop.
{
	int num,length;
	cout << "enter length";
	cin >> length;
	cout << " enter a number";
	cin >> num;
	for (int i=1; i<=length; i++){
		cout << num << "  " << i << i*num << endl;
	} 
	return 0;
}
