#include <iostream>
using namespace std;
#include <set>

int main()
{
  // stores unique values and in sorted order
  set<int> st;

  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(3);
  st.insert(4);

  for (int i : st)
  {
    cout << i << " ";
  }

  auto j = st.find(7); // if no element is present then it returns st.end()

  auto k = st.find(3); // returns an iterator that points at 3

  // auto it = st.find(2);

  // erase(start , end)
  st.erase(st.find(2), st.find(4));
  cout << endl;

  for (int i : st)
  {
    cout << i << " ";
  }

  auto it0 = st.lower_bound(3);
  auto it1 = st.upper_bound(4);

  cout << endl
       << *it0 << " " << *it1;

  return 0;
}