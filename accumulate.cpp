#include<bits/stdc++.h>
using namespace std;
int reply(int a,int b)
{
    return a*b;
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    int result;
    accumulate(v.begin(),v.end(),result);
    cout<<result<<endl;

    accumulate(v.begin(),v.end(),result,reply);
    cout<<result;
    return 0;
}