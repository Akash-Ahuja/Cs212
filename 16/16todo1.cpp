#include<iostream>
using namespace std;
using std::endl;

int x;
int factorial(int x){
  if(x==1){
    return 1;
}
  else{
    return x*factorial(x-1);
  }
}

int main()
{
  cout << factorial(7) << endl;
  return 0;
}
