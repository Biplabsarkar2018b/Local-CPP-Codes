#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    cin>>N;
	    int A[N];
	    int D[N];
	    for(int i=0;i<N;i++){
	        cin>>A[N];
	    }
	    for(int i=0;i<N;i++){
	        cin>>D[N];
	    }
	    unordered_map<int,int> m;
	    for(int i=0;i<N;i++){
	        m[A[i]]++;
	    }
	    for(int i=0;i<N;i++){
	        m[D[i]]++;
	    }
	    int ans = 1;
	    for(auto i:m){
	       cout<<i.second<<endl;
	        ans = max(ans,i.second);
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
