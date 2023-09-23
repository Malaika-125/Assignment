#include <iostream>
using namespace std;

int main()
//program to find maximum of three numbers using logical operatos.
{
int x,y,z;
cout << "Enter three numbers";
cin >> x,y,z;
if (x>y && x>z)
cout << "x is maximum number" << x << endl;
else if (y>x && y>z)
cout << "b is maximum number" << y << endl;
else  
cout << "z is maximum number" << z << endl;
return 0;

	
}
