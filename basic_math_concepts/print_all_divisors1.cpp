#include <bits/stdc++.h>
using namespace std;

void checkDivisors(int n)
{
  vector<int> list;
  // instead of using sqr we can use i*i <= n --- 6*6 <= 36 ---- 36<=36
  // TC - O(√n)
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      list.push_back(i);
      if ((n / i) != i)
      {
        list.push_back(n / i);
      }
    }
  }
  // TC - O((√n)log(n)) where n is the number of factors(divisors)
  sort(list.begin(), list.end());

  // TC - O(√n)
  for (auto i : list)
  {
    cout << i << " ";
  }
}

int main()
{
  int n;
  cout << "Enter any Number: ";
  cin >> n;

  checkDivisors(n);

  return 0;
}

// Time Complexity - O(√n)+O(√nlogn)+O(√n) =>  O(√n log n)
// Space Complexity - O(√n)