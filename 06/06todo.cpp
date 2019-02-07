#include <iostream>
using namespace std;
using std::endl;

int maxNum (int x, int y, int z)

    int max;
      if(x >= y && x >= z)
      max = x;
      else if(y >= x && y >= z)
      max = y;
      else
      max = z;
    return max;



