#include <iostream>
using namespace std;
#include <stack>

int main()
{
  // LIFo - Last In First Out Data Structure
  stack<int> st;
  st.push(3);
  st.push(12);
  st.emplace(10);
  st.emplace(17);

  cout << st.top() << endl;

  st.pop();

  cout << st.top() << endl;

  cout << st.size() << endl;

  cout << st.empty() << endl;

  // swap
  stack<int> st1, st2;
  st1.emplace(10);
  st1.emplace(5);

  st2.push(12);
  st2.push(2);

  st1.swap(st2);

  return 0;
}