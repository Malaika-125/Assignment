#include <iostream>
#include "Calculator.h"
using namespace std;
int main() 
{
    int a , b; 
    cout << "Enter two numbers: ";
    cin >> a >> b;
    //addition using sum() with namespace calc
    cout<<"Addition: "<<calc::sum(a, b)<<std::endl;

    //subtraction using sub() with namespace calc
    cout<<"Subtraction: "<<calc::sub(a, b)<<endl;

    //multiplication using mul() with namespace calc
    cout<<"Multiplication: "<<mul(a, b)<<endl;

    //division using div() with namespace calc
    cout<<"Division: "<<calc::div(a, b)<<endl;

    return 0;
}