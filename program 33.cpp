#include <iostream>
using namespace std;

int main()
//input starting and ending from user and display odd number in given range using do- while loop
{
	int start,end;
	cout << "enter starting number";
	cin >> start;
	cout << "enter ending number";
	cin >> end;
	if(start>end){cout << "starting point cannot be greater than ending point";}
    else {
	if (start%2==0){start++;}
	do{
		cout << start << endl;
		start+=2;
	}while (start<=end);
}
}
