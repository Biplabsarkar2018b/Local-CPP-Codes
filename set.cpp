#include<iostream>
#include<set>
using namespace std;
void showSet(set<int> s)
{
    set<int>::iterator i;
    for ( i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<" ";
    }
    
}
int main()
{
    set<int> se;
    se.insert(2);
     se.insert(3);
      se.insert(1);
       se.insert(5);
        se.insert(4);

        showSet(se);
   return 0;
}