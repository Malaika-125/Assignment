#include <iostream>
using namespace std;

int main()
{
	int num,reversed_number=0,reminder;
	cout << "enter a number";
	cin >> num;
 while(num != 0){
 	reminder= num%10;
 	reversed_number = reversed_number*10+reminder;
 	num/=10;
 }
 cout << "reversed number = " << reversed_number;
}
