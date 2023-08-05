#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>> adj;


        void addEdge(int u,int v,bool direction){
            adj[u].push_back(v);


            if (direction==0)
            {
                adj[v].push_back(u);
            }
        }


        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }
};


int main()
{

    int n;
    cout<<"Enter The No Of Nodes: ";
    cin>>n;
    cout<<endl;

    int m;
    cout<<"Enter the no of edges: ";
    cin>>m;
    cout<<endl;
    
    Graph g;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();
    


   return 0;
}