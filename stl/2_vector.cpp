#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main()
{
  // vector<data_type> variable name
  vector<int> v = {10, 20, 30, 40};
  vector<int>::iterator it = v.begin();

  it++;
  cout << *(it) << endl;
  // * use to access value

  v.push_back(50);

  for (it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " ";
  }

  cout << endl
       << v.front() << endl;

  v.emplace_back(60);
  v.insert(v.begin(), 5);

  for (auto i : v) // i is loop variable
  {
    cout << i << " ";
  }

  // lower_bound
  int lower = lower_bound(v.begin(), v.end(), 25) - v.begin();
  cout << endl
       << lower << endl;

  int upper = upper_bound(v.begin(), v.end(), 50) - v.begin();
  cout << upper;

  return 0;
}