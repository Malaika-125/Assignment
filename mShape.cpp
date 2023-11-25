#include<iostream>
#include "mShape.h"
using namespace std;
int main() 
{
    int height, weidth, side;
    cout << "Enter the dimensions of rectangle (hxw): ";
    cin >> height >> weidth;
    shapes::rectangle(height,weidth);
    cout<<endl;
    cout << "Enter the side length of square: ";
    cin>>side;
    shapes::sqruare(side);
    cout<<endl;
    cout<<"Enter the sides of right angle triange: ";
    cin>>height>>weidth;
    rtangle(height,weidth);
}