#include <iostream>
using namespace std;

int main()
// display sum of series using while loop
//1+1/2 + 1/4 + 1/6 +....+1/100
{
	float c,r;
	c=2.0;
	r=1;
	while (c<=100)
	{
		r=r+1.0/c;
		c=c+2;
	}
	cout << "result" << r << endl;
}
