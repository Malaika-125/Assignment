#include <iostream>
using namespace std;

int main(){
	double sum=0.0;
	for (int i=1; i<99; i++){
	
	 sum+=static_cast <double>(i)/(i+1);
	 cout << "sum of series is " << sum << endl;
}
return 0;
}
