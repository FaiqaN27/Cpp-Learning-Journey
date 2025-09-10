#include <iostream>
using namespace std;
#include <map>

int main()
{
  // key - value data structure
  // keys are unique & in sorted order & values can be same
  map<int, int> mp;

  mp.insert({1, 3});
  mp.emplace(3, 8);

  mp[2] = 6;
  mp.insert({5, 9});
  mp.insert({0, 7});

  for (auto it : mp)
  {
    cout << it.first << " " << it.second << endl;
  }

  auto it = mp.find(9);
  if (it != mp.end())
  {
    cout << "Value: " << it->second << endl;
  }
  else
  {
    cout << "Value not found" << endl;
  }

  map<pair<int, string>, int> mpp;

  mpp[{1, "ab"}] = 6;
  mpp.insert({{0, "bc"}, 10});
  mpp.insert({{4, "cc"}, 1});
  mpp.insert({{2, "cd"}, 5});

  for (auto i : mpp)
  {
    cout << "Key : {" << i.first.first << "," << i.first.second << "} " << "Value: " << i.second << endl;
  }

  auto it0 = mpp.lower_bound({3, ""});
  auto it1 = mpp.upper_bound({0, ""});

  cout << "Lower bound value: " << it0->second;

  cout << endl
       << "Upper bound value: " << it1->second;

  return 0;
}