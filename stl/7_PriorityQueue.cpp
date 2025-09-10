#include <iostream>
using namespace std;
#include <queue>

int main()
{
     // maxmimum element to store at top
     priority_queue<int> pq; // max heap
     pq.push(3);
     pq.push(12);
     pq.emplace(10);
     pq.emplace(17);

     //{3,12,10,17} normal queue
     //{17,12,10,3}  priority queue
     cout << endl
          << "Max Priority Queue" << endl;

     cout << pq.top() << endl;

     pq.pop(); // removes front element

     cout << pq.top() << endl;

     priority_queue<int, vector<int>, greater<int>> min; // min heap

     min.push(3);
     min.push(12);
     min.emplace(10);
     min.emplace(17);
     //{3,10,12,17}
     cout << endl
          << "Min Priority Queue" << endl;

     cout << min.top() << endl;

     pq.pop(); // removes front element

     cout << pq.top() << endl;

     return 0;
}