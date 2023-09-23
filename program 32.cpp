#include <iostream>
using namespace std;

int main()
// display sum  of series using do while loop 
{
	int a=1, n,sum=0;
	cout << "enter the value of n";
	cin >> n;
   do{
		sum = sum+a;
		a=a+1;
     }while (a<=n);
	cout << "sum" << sum;
	
	return 0;
}
