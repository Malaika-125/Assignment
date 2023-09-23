#include <iostream>
using namespace std;

int main()
{
	int i=1 ,factorial ,num;
	cout << "number is";
	cin >> num;
	do{
		factorial = factorial*i;
		i++;
	}while (i<=num);
	cout << "factorial is" << factorial  << endl;
	return 0;
}
