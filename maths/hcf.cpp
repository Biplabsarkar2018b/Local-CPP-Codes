#include<iostream>
using namespace std;

int hcf(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }

    if (a==b)
    {
        return a;
    }

    if (a>b)
    {
        return hcf(a-b,b);
    }
    return hcf(a,b-a);
   
}

int lcm(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }

    if (a==b)
    {
        return a;
    }
    
    return (a*b)/hcf(a,b);
    
    
    
    
}

int main()
{

    cout<<lcm(10,5);
   return 0;
}