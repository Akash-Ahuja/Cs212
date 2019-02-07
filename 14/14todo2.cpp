  #include<iostream>
  #include<set>
  using std::cout;
  using std::cin;
  using std::endl;
  using std::set;

  set<int> intersect(const set<int>& S1, const set<int>& S2);

  set<int> I;

  int main()
  {
    set<int> S1 = {2,3,4,5,6,7};
    set<int> S2 = {3,5,6,8,18};
    set<int> I;
    cout << I << endl;

  for(set<int>::iterator i = I.begin(); i!= I.end(); i++)
    {
     cout << "*i " << "  " << "\n";}

   return 0;
   }
