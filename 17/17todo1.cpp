#include<iostream>
using namespace std;
using std::endl;
#include<cstdio>

int n;
void PrintVertically(unsigned long n)
{
 if(n==1){
   return n;
   }
 else{
   return PrintVertically(n);
   }
}

int main()
{
  cout << PrintVertically(n) << endl;
  return 0;
}
