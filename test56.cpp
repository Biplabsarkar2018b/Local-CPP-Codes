#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=2) return 1;

    return fib(n-1)+fib(n-2);
}
int main()
{
    // cout<<fib(6)<<endl;
    // cout<<fib(10)<<endl;
    // cout<<fib(8)<<endl;
    cout<<fib(50);
   return 0;
}