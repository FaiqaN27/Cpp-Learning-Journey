// brute force method using two array

#include <bits/stdc++.h>
using namespace std;

void countFrequency(vector<int> arr)
{
  int n = arr.size();
  vector<bool> visited(n, false);

  for (int i = 0; i < n; i++)
  {
    if (visited[i])
      // Skip the rest of the code in this iteration of the loop.
      continue;

    // atleast one occurence toh hai
    int count = 1;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        visited[j] = true;
        count++;
      }
    }
    cout << "Frequency of " << arr[i] << " -> " << count << endl;
  }
}

int main()
{
  vector<int> arr = {10, 15, 5, 5, 10, 20};

  countFrequency(arr);

  return 0;
}
