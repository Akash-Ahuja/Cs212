#include<iostream>
using namespace std;
using std::endl;

int n;
int deffibonacci(n);
{
  if(n==0)
    {
    return 0;
    }
  else if(n==1){
    return 1;}
//**the code above has two base steps,one for zero and one for one**//
  else{
    return (fibonacci(n-1)+fibonacci(n-2));
    }
  }

int main()
{
 int deffibonacci(3);
  cout << (fibonacci(3-1)+fibonacci(3-2)) << endl;
  return 0;
}