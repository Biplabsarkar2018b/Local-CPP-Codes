#include<iostream>
#include<deque>
using namespace std;
void showdq(deque<int> g)
{
    deque<int>::iterator i;
    for (i = g.begin(); i != g.end(); i++)
    {
        cout<<*i<<endl;
    }
    
}
int main()
{
    deque<int> pogo;
    pogo.push_back(8);
    pogo.push_front(9);
    pogo.push_back(3);
    pogo.push_front(7);
    showdq(pogo);
   return 0;
}