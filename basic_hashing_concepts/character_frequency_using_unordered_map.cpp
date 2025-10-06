// using unordered map - not store in sorted manner

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "enter any string: ";
  cin >> s;
  unordered_map<char, int> um;
  for (auto i : s)
  {
    um[i]++;
  }

  int q;
  cout << "enter number of query: ";
  cin >> q;
  while (q--)
  {
    char ch;
    cout << "enter character to find frequency: ";
    cin >> ch;

    cout << ch << " frequency is " << um[ch] << endl;
  }
  return 0;
}