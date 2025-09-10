#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
  // possible combination of string
  string s = "125";
  do
  {
    cout << s << " ";
  } while (next_permutation(s.begin(), s.end()));

  return 0;
}