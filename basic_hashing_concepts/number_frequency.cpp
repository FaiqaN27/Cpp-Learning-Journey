// hashing number frequency using array

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter length of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precompute
  int hash[13] = {0};
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  int q;
  cout << "Enter number of query: ";
  cin >> q;
  while (q--)
  {
    int number;
    cout << "enter number to find frequency: ";
    cin >> number;
    // fetch
    cout << number << " occurs " << hash[number] << " times in array" << endl;
  }

  return 0;
}