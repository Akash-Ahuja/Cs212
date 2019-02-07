#include <iostream>
using std::cout;
using std::cin;
#include <limits.h>
int min(int, int, int);
int main()
{
 /* int z;
  z = INT_MIN;
  cin >> z;

  int x;

  while(cin >> z)
  {
    if (z < x)
    {
      x = z;}
    }
    int y;
    y = x++;
    cin >> y;


  cout << "The minimum number is " << z << "\n";
  cout << "The second minimum number is " << x << "\n";*/

  int x, y, z;
  cin >> x >> y >> z;
  min(x, y, z);

  return 0;
}

int min(int a, int b, int c){
int minimal;

if(a < b && a < c)
  minimal = a;
  else if(b < a && b < c)
    minimal = b;
    else{
      minimal = c;}
  return minimal;
    }