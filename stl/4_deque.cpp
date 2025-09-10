#include <iostream>
using namespace std;
#include <deque>

int main()
{
  deque<int> dq = {1, 5, 9};

  // insert
  dq.push_back(12);
  dq.push_front(8);

  for (int j : dq)
  {
    cout << j << " ";
  }

  // delete
  dq.pop_front();
  dq.pop_back();

  int fr = dq.front();
  int bk = dq.back();

  cout << endl
       << "After using Pop" << endl
       << fr << endl
       << bk;

  // rest function saes as vector

  return 0;
}