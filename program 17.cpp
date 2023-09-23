#include <iostream>
using namespace std ;

int main()
//input and find it positive , negative , or zero
{
 int number;
 cout << "Enter number";
 cin  >> number;
 if ( number>0) {
 	cout << "Enter number is positive" << endl;
 }
 else if(number<0) {
 	cout << "Enter number is negative" << endl;
 }
 else {
 	cout << "You entered Zero" << endl;
 }
 return 0;
 
 
}
