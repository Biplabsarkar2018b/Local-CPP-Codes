#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

void pairSort(int a[],char b[])
{
    pair <int,char> pair1[10];

    for (int i = 0; i < 10; i++)
    {
        pair1[i].first = a[i]; 
        pair1[i].second = b[i];
    }

    sort(pair1,pair1+10);

    for (int i = 0; i < 10; i++)
    {
        a[i] = pair1[i].first;
        b[i] = pair1[i].second;
    }
    
    

}


int main()
{
    int a[] = {2,5,3,9,6,4,1,0,7,8};
    char b[] = {'A','E','F','Z','W','Q','Y','T','D','S'};

    pairSort(a,b);
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    
   return 0;
}