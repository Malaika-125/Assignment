#include <iostream>
using namespace std;

 int main()
 //input four number & find sum ,product,average
 {
 	int a,b,c,d;
 	int sum;
 	int average;
 	int product;
 	cout << "a,b,c,d";
 	cin >> a >> b >> c >> d;
 	sum = a+b+c+d;
 	average = sum/4;
 	product = a*b*c*d;
 	cout << "sum ="<< sum << endl;
 	cout << "average =" << average << endl;
 	cout << "product =" << product << endl;
	return 0;
 }
