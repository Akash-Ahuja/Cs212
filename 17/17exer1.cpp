#include<iostream>
using namespace std;
using std::endl;

int a;
int b;
int gcd(a,b);
{
  if(b==0){
   return a;
  }
  else{
    return gcd(b,a%b);
    }
}

int main()
{
  cout << gcd(b,a%b) << endl;
  return 0;
}
