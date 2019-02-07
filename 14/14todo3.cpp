  #include<iostream>
  #include<set>
  using std::cout;
  using std::cin;
  using std::endl;
  using std::set;

  set<int> Union(const set<int>& S1, const set<int>& S2);
  set<int> U;

  int main()
  {
    set<int> S1 = {2,3,4,5,6,8};
    set<int> S2 = {12,13,14,16,22,30};
    set<int> U;

    cout << "U " << "\n";

   for(set<int>::iterator i= U.begin(); i!= U.end(); i++);
    {
      cout << "*i " << " " << endl;}

    return 0;
   }
