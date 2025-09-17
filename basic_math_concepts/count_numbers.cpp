#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "enter any number: ";
  cin >> n;
  int count = log10(n) + 1;
  cout << "Total Digits: " << count;

  return 0;
}

// Time Complexity - O(1)
// Space Complexity - O(1)