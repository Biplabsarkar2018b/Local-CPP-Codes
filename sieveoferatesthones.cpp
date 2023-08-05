#include<bits/stdc++.h>
using namespace std;
void prime(int n){

    vector<bool> v(n+1,true);


    //marking non primes as false
    for(int i=2;i*i<n;i++){
        int s = i*i;
        for(int j=s;j<=n;j=j+i){
            v[j] = false;
        }
    }

    //printing
    for(int i=2;i<n;i++){
        if(v[i]) cout<<i<<" ";
    }

}
int main()
{
    int n;
    cout<<"Enter No: "<<endl;
    cin>>n;
    prime(n);
   return 0;
}