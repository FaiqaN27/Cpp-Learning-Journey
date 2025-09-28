#include <iostream>
using namespace std;

void printNumber(int count)
{
  if (count > 20)
    return;
  cout << count << " ";
  printNumber(count + 2);
}

int main()
{
  printNumber(0);
  return 0;
}