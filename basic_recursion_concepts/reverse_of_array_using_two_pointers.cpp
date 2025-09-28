// 1st technique using two pointers technique

#include <bits/stdc++.h>
using namespace std;

void reverseArr(int l, int r, int arr[])
{
  if (l >= r)
    return;

  swap(arr[l], arr[r]);
  reverseArr(l + 1, r - 1, arr);
}

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
  reverseArr(0, n - 1, arr);

  cout << "Reversed Array: ";

  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << " ";
  }

  return 0;
}

// If we change elements inside the function (swap(arr[l], arr[r])), those changes happen in the original array in main.

// That’s why we don’t need to return the array — it’s already updated.