#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {10, 13, 22, 10, 45, 13, 22, 10};
  unordered_map<int, int> mp;

  for (int i = 0; i < arr.size(); i++)
  {
    mp[arr[i]]++;
  }

  for (auto i : mp)
  {
    cout << "Frequency of " << i.first << " is " << i.second << endl;
  }

  return 0;
}