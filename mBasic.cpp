#include<iostream>
#include"mBasic.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fabonacci series: ";
    series::fabonacci(num);
    cout<<endl;
    cout<<"Factorial of "<<num<<" is "<<fact(num);
}
