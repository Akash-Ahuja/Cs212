#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int n;
  int product;
  cin >> n;
  product = n;
  {
    while(cin >> n)
     product*= n;
      cout << "The product is " << product << endl;
    }
    return 0;
}