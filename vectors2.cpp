#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num;
    int i;
    for (i = 0; i <= 100; i++)
    {
        num.push_back(i);
        cout<<"Size: "<<num.size()<<endl;
         cout<<"Capacity: "<<num.capacity()<<endl;
        cout<<num.at(i)<<endl;
    }
    
   return 0;
}