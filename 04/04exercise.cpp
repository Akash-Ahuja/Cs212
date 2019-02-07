  #include <iostream>
  #include <cmath>
  using namespace std;
  using std::endl;

  int main()

  {
    float a;
    float r = 0.001;
    float p = 2000;

    for (int day; day <= 10; day++)
    {
      a = p * pow(1 + r, day);
      cout << day << ": " << a << endl;
    }

    return 0;
  }
