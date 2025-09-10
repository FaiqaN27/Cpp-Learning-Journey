#include <iostream>
using namespace std;

int main()
{
  pair<int, int> p1 = {1, 4};
  cout << p1.first << " " << p1.second;

  cout << endl;

  pair<int, pair<int, int>> p = {1, {9, 5}};
  cout << p.first << " " << p.second.second;

  cout << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 6}, {6, 7}};
  cout << arr[0].second << " " << arr[2].first;

  return 0;
}