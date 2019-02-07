  #include <iostream>
  using namespace std;

  int main()
{
  int n;

  cout <<"Please enter your number\n";
  cin >> n;
  int product= n*(n+1)*(n+2);
  if (n<= 10 || n<=20) {
   cout << "The product is " << product << endl;
  }

  else { cout << "not valid\n"; }
  return 0;
}



