#include <iostream>
using namespace std;

int main()
{
  int a,b,c; 
  cout << "Enter three numbers";
  cin >> a,b,c;
  if (a<b)
  {
    if (a<c)
   cout << "smallest" << a;
   else 
   cout << "smallest" << c; 
  }
   else
    {
	if (b<c)
    cout << "smallest" << b;
    else
    cout <<"smallest" << c;
    }
    return 0;
	
}
