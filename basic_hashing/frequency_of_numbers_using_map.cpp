// using map to hash frequency of numbers - stores in sorted order

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter length of array: ";
  cin >> n;
  int arr[n];
  map<int, int> mp;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    // precompute
    mp[arr[i]]++;
  }

  int q;
  cout << "enter number of query: ";
  cin >> q;
  while (q--)
  {
    int number;
    cout << "enter number to find frequency: ";
    cin >> number;

    cout << "frequency of " << number << " is " << mp[number] << endl;
  }

  return 0;
}