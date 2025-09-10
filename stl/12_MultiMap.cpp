#include <iostream>
using namespace std;
#include <map>

int main()
{
  // can store duplicate keys but in sorted manner
  multimap<int, int> mmp;

  mmp.insert({1, 3});
  mmp.emplace(3, 8);
  mmp.emplace(3, 5);
  mmp.emplace(3, 8);
  mmp.insert({9, 9});
  mmp.insert({0, 7});

  for (auto it : mmp)
  {
    cout << it.first << " " << it.second << endl;
  }

  auto it = mmp.find(9);
  if (it != mmp.end())
  {
    cout << "Value: " << it->second << endl;
  }
  else
  {
    cout << "Value not found" << endl;
  }

  multimap<pair<int, string>, int> mpp;

  mpp.insert({{0, "bc"}, 10});
  mpp.insert({{4, "cc"}, 9});
  mpp.insert({{4, "cc"}, 1});
  mpp.insert({{4, "cc"}, 6});
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