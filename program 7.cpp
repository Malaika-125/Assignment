#include <iostream>
using namespace std;

int main()
//input radius & calculate area and circumference
{
  float pi,rad,area,cir;
  pi = 3.1416;
  cout << "radius";
  cin >> rad;
  // formula; area = pi*r*r*/
  area = pi*rad*rad;
  cir = 2*pi*rad;
  cout << "area of circle =" << area;
  cout << "circumference of circle =" << cir;
  return 0;
}
