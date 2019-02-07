#include <iostream>
#include <map>
#include <string>
using namespace std;
using std::map;
using std::string;
using std::endl;

int main()
{
  map<string,int> F;
  string s;
  while (cin >> s)
  {
    F[s]++;}

  for(map<string,int>::iterator i= F.begin(); i!= F.end(); i++)
    {
      cout << (*i).first << ":\t" << (*i).second << endl;
      }

  return 0;
  }