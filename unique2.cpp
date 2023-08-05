#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {1,1,1,2,2,3,4,55,5,5,6,6,7};
    unique(ar,ar+13);
    for (int i = 0; i < 13; i++)
    {
        cout<<ar[i]<<" ";
    }
    
   return 0;
}