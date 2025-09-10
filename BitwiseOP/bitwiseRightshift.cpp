#include <iostream>
using namespace std;

int main()
{
  int n = 5;

  cout << (n >> 2);
  return 0;
}

// n = 5 -> 101
// 101>> 2  -> 1
// basically shifts at 2 position right so exclud all extra digits