#include <iostream>

using namespace std;

int main ()
{
  int inputtedinteger;
  double sum;
  cout << "Please enter your first integer" << "\n";
  cin >> inputtedinteger;
  sum+= inputtedinteger;
  cout << "Please enter your second integer" << "\n";
  cin >> inputtedinteger;
  sum+= inputtedinteger;
  cout << "Please enter your third integer" << "\n";
  cin >> inputtedinteger;
  sum+= inputtedinteger;
  cout << "Please enter your fourth integer" << "\n";
  cin >> inputtedinteger;
  sum+= inputtedinteger;
  cout << "Please enter your final integer" << "\n";
  cin >> inputtedinteger;
  sum+= inputtedinteger;
  cout << "The average of the integers I inputted is " << (sum)/5 << endl;
  return 0;
}
