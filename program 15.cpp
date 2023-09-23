#include <iostream>
using namespace std;

int main()
//input salary & grade add 50% bounus if grade is greater than15 . it  add 25% bonus if grade is 15 or less and dispkay salary.
{
int salary,grade;
cout << "enter salary:";
cin >> salary;
cout << "enter grade";
cin >> grade;
if(grade>15){
	cout << "salary is" << salary+ salary*50.0/100.0;
}else if(grade<=15){
	cout << "salary is" <<  salary + 25.0/100.0;
}else {cout << "salary is" << salary;
}
return 0;
}

