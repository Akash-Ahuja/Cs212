  #include <iostream>
  using std::cout;
  using std::cin;
  #include <limits.h>

  int main()

  {
    int x;
    x = INT_MIN;
    int n;

    while (cin >> n)
    {
      if (n < x)
      {
        x = n;}
      }
    cout << "smallest number is " << x << "\n";
    return 0;
  }