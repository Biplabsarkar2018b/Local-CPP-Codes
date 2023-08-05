#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin>>a;
    vector<int> rem;
    while (a!=0)
    {
        int i = 0;
        rem[i] = a%2;
        a = a/2;
        i++;
    }
    reverse(rem.begin(),rem.end());
    for (auto i:rem)
    {
        cout<<i;
    }
    
    
   return 0;
}