#include <iostream>
using namespace std;

int main()
// display first five numbers and their sum using while loop.
{
	int i = 1,sum = 0;
	while (i<=5)
	{
	cout << i << endl;
	sum = sum+i;
	i++;
   }
	cout << "sum" << sum << endl;
	return 0;
}
