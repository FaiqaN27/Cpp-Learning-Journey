#include <iostream>
using namespace std;
#include <list>

int main()
{
  list<int> ls;

  ls.push_back(14);
  ls.push_front(10);

  for (int i : ls)
  {
    cout << i << " ";
  }

  cout << endl;
  // remian functions same as vector
  // begin , end , rbegin ,rend , clear , insert , size ,swap , erase

  cout << ls.front() << endl; // first element
  cout << ls.back();          // last element;

  return 0;
}