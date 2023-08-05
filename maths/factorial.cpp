#include<iostream>
using namespace std;

int factorial(int a){
    if (a==0)
    {
        return 1;
    }

    return a*factorial(a-1);
    
}

int main()
{
    cout<<factorial(3);
   return 0;
}