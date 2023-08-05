#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list<int> li)
{
    list<int>::iterator i;
    for ( i = li.begin(); i != li.end(); i++)
    {
        cout<<*i<<" ";
    }
    
}
int main()
{   
    list<int> l;
    l.push_back(45);
    l.push_back(34);
    l.push_front(23);
    l.push_front(9);

    showlist(l);

   return 0;
}