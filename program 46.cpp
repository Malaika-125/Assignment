#include <iostream>
using namespace std; 

  int main()
{
	int sum =0;
	int X=2;
	for(int i=1; i<5; i++){
		sum+=X;
		X*=(i+1);
	}
	cout << "sum of series is " << sum << endl;
	return 0;
	
}
