#include <iostream>
using namespace std;

void printName(int curr, int num)
{
  if (curr > num)
    return;
  cout << "Bubbles" << " ";
  // parameters variation
  printName(curr + 1, num);
}

int main()
{
  int num;
  cout << "enter any num: ";
  cin >> num;
  printName(1, num);
  return 0;
}