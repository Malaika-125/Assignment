#include <iostream>
using namespace std;

int main()
{
	int salary;
	cout << "salary";
	cin >> salary;
	if (salary>=20000)
	{
		cout << "salar is" << salary- salary*7.0/100;
	} else if (salary >=10000)
	{
		cout << "salary is" << salary -1000;
	}
	cout << "salary is" << salary;
}
