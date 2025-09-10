#include <iostream>
using namespace std;
#include <queue>

int main()
{
  // FIFO - First In First Out
  queue<int> q;
  q.push(3);
  q.push(12);
  q.emplace(10);
  q.emplace(17);

  //{3,12,10,17}

  cout << q.front() << endl;

  q.pop(); // removes front element

  cout << q.front() << endl;
  cout << q.back() << endl;

  cout << q.size() << endl;

  cout << q.empty() << endl;

  return 0;
}