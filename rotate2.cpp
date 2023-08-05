#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arrr[] = {1,2,3,4,5,6,7,8,9};

    rotate(arrr,arrr+4,arrr+9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arrr[i]<<" ";
    }
    
    return 0;
}