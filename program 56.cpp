#include <iostream>
using namespace std;

int main()
{
	int rows=5;
	for (int i=1; i<=rows; i++){
	for (int k=1; k<=i;k++){
		cout << "  ";
	}
	for (int j=rows; j>=i; j--){	
	    cout << "*";
}
     cout << endl;
	}
	return 0;
}
