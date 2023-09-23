#include <iostream>
using namespace std;

int main() 
//input a number from user and display table using while loop
{
	int num,c=1;
	cout << "enter an number";
	cin >> num;
	while (c<=10)
	{
	cout << num*c << endl;
	c++; 
	}
    return 0;
}
