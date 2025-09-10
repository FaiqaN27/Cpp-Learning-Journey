#include <iostream>
using namespace std;
#include <unordered_set>

int main()
{
  // stores unique but not in sorted order
  unordered_set<int> us;

  us.insert(1);
  us.insert(2);
  us.insert(8);
  us.insert(4);
  us.insert(5);
  us.insert(6);
  us.insert(7);
  us.insert(7);

  for (int i : us)
  {
    cout << i << " ";
  }

  auto j = us.find(7); // returns an iterator that points at 7

  auto k = us.find(9); // returns an iterator that points at us.end()

  cout << endl
       << *j;

  // erase(start , end) not suitable for unordered set

  us.erase(2);
  cout << endl;

  for (int i : us)
  {
    cout << i << " ";
  }

  // upper and lower bound not work with unordered_set

  return 0;
}