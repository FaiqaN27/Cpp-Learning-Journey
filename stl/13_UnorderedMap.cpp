#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
  // can have unique keys but not in sorted order
  unordered_map<int, int> um;

  um.insert({1, 3});
  um.insert({2, 4});
  um.insert({3, 7});
  um.insert({4, 4});
  um.insert({5, 7});
  um.insert({6, 3});
  um.insert({7, 1});
  um.insert({7, 0});

  for (auto i : um)
  {
    cout << i.first << " " << i.second << endl;
  }

  auto it = um.find(3);
  if (it != um.end())
  {
    cout << "Key: " << it->first << " Value: " << it->second << endl;
  }
  else
  {
    cout << "Value not found" << endl;
  }

  return 0;
}