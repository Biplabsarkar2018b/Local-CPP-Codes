#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(2);
    pq.push(4);
    pq.push(7);
    pq.push(5);
    pq.push(9);

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
   return 0;
}