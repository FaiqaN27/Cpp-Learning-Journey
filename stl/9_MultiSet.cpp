#include <iostream>
using namespace std;
#include <set>

int main()
{
  // stores in sorted manner
  multiset<int> ms;

  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.insert(4);
  ms.insert(4);
  ms.insert(6);

  for (int i : ms)
  {
    cout << i << " ";
  }

  cout << endl;
  // erase all 1's
  ms.erase(1);
  for (int i : ms)
  {
    cout << i << " ";
  }

  cout << endl;
  // erase only 1st occurence of 4
  ms.erase(ms.find(4));
  for (int i : ms)
  {
    cout << i << " ";
  }

  multiset<int> m = {1, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
  cout << endl;
  auto start = m.find(1);
  auto end = next(start, 3); // moves 3 steps forward from 'start'

  m.erase(start, end);
  for (int i : m)
  {
    cout << i << " ";
  }

  return 0;
}