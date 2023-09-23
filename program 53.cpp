#include <iostream>
using namespace std;
int main()
{
	int rows=4;
	int num= rows;
	do{
		int col=1;
	do{
		cout << num << "  ";
		col++;
	} while (col<=num);
	cout << endl;
	num--;
	}while (num>=1);
	return 0;
}
