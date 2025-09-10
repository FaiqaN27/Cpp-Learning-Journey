#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
  vector<int> arr = {1, 3, 9, 10, 2, 8};

  auto maximum = max_element(arr.begin(), arr.end());

  auto minimum = min_element(arr.begin(), arr.end());

  cout << "Maximum element : " << *maximum << endl;

  cout << "Minimum element : " << *minimum << endl;

  return 0;
}