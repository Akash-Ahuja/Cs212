#include <iostream>
using namespace std;
using std::endl;
#include <set>
using std::set;
using std::string;

struct SortOrder
{
  bool operator() (const string &first, const string &second);
  {
   int.length1 = first.length();
   int.length2 = second.length();

   if(length1 == length2)
     return (first < second);
   else{
     return (length1 < length2);
      }
  }
}

int main()
{
  set<string, SortOrder> names;

  names.insert("Akash && Ahsan ");
  names.insert("Computer Science is life for everyone ");
  for(iterator = names.begin(); iterator!= names.end(); iterator++)
  cout << "iterator " << endl;

  cin.get();
  return 0;
}
