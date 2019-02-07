#include<iostream>
#include<cmath>
using namespace std;
using std::pow;
using std::endl;

double x;
double n;
double pow(double x,double n)
{
  if(n==1){
    return x;}
    else{
      return pow(x, n);
    }
}

int main()
{
  cout << pow(x, n) << endl;
   return 0;
}
