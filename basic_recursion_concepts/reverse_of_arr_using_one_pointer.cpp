#include <bits/stdc++.h>
using namespace std;

void reverseArray(int curr, int arr[], int n)
{
  if (curr >= n / 2)
    return;

  swap(arr[curr], arr[n - curr - 1]);
  reverseArray(curr + 1, arr, n);
}

int main()
{
  int n;
  cout << "enter length of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  reverseArray(0, arr, n);
  cout << "Reversed Array: ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}