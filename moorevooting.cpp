#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& v){
    int prev = v[0];
    int count = 1;

    for(int i=1;i<v.size();i++){
        if(v[i]==prev){
            count++;
        }else{
            count--;
            if(count==0){
                prev = v[i];
                count++;
            }
        }
    }
    return prev;
}

int main()
{
    vector<int> v = {1,1,3,3,4,1,1,1};
    int major = majorityElement(v);
    cout<<major<<endl;
   return 0;
}