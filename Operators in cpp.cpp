#include <iostream>
using namespace std;
int main()
{
	int x = 40;
	int y = 60;
	//Arithmetic operators
	cout << "Result of Arithmatic Operators are "<< endl;
	cout << "Addition of x and y is "<< x+y << endl;
	cout << "Subtraction of x and y is" << x-y << endl;
	cout << "Multiplication of  x and y is" << x*y << endl;
	cout << "Division of x over y is" << x/y << endl;
	cout << "Modulus of x over y is" << x%y << endl;
	cout << "Increase the value of x variable by using post increment" << (x>y) << endl;
	cout << "Decrease the value of x variable by 1 using pre increment" << ++x << endl;
	cout << "Increase the value of y variable by 1 using post increment" << y++ << endl;
	cout << "Decrease the value of y variable by 1 using pre increment" << ++y << endl;
    cout << "*************" << endl;
    //Assignment operator
    cout << "Result of Assignment and compound Assignment Operators are" << endl;
    int marks = 60;
    cout << "The marsk are " << marks << endl;
    //Compound Assignment or Additional Assignment Operators
    marks += 60;
    marks -= 2;
    marks *= 2;
    marks /= 2;
    marks %= 2;
    //Comparision Operator
    cout << (x > y) << endl;    
    cout << (x < y) << endl;
    cout << ( x >= y) << endl;
    cout << ( x <= y) << endl;
    cout << ( x != y) << endl;
    cout << ( x == y) << endl;
    //Logical Operators
    bool isStudent = true;
    bool isBoy = true;
    cout << "*******************" << endl;
    cout << "Result of Logical Operators are" << endl;
    cout << (isStudent && isBoy) << endl;
    cout << (isStudent || isBoy) << endl;
    cout << !(isStudent) << endl;
    return 0;

    
}
