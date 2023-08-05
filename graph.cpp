#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int destinationVertexId;
    int weight;

    Edge(){

    }
    Edge(int destVID, int w){
        destinationVertexId = destVID;
        weight = w;
    }

    void setEdgeValue(int destVID,int w){
        destinationVertexId = destVID;
        weight = w;  
    }
    void setWeight(int w){
        weight = w;
    }
    int getDestinationVID(){
        return destinationVertexId;
    }
    int getWeight(){
        return weight;
    }
};

class Vertex{

    public:
    int state_id;
    string state_name;
    list<Edge> edgeList;

    Vertex(){
        state_id = 0;
        state_name = "";
    }

    Vertex(int id,string name){
        state_id = id;
        state_name = name;
    }

    void setID(int id){
        state_id = id;
    }
    void setSName(string sname){
        state_name = sname;
    }
    int getID(){
        return state_id;
    }
    string getSName(){
        return state_name;
    }

    list<Edge> getEdgeList(){
        return edgeList;
    }

};


class Graph{
    public:
    vector<Vertex> vertices;

    void addVertex(Vertex v){
        bool check = checkIfVertexExistByID(v.getID());

        if (check==true)
        {
            cout<<"Vertex already exist"<<endl;
        }else
        {
            vertices.push_back(v);
            cout<<"Vertex added succesfully"<<endl;
        }
        
        
    }

    bool checkIfVertexExistByID(int vid){
        for (int i = 0; i < vertices.size(); i++)
        {
            if (vertices.at(i).getID()==vid)
            {
                return true;
            }
            
        }

        return false;
        
    }

    


};



int main()
{
    int option,id;
    string sname;
    Graph g1;
    Vertex v1;
    do
    {
       cout<<"Enter The Option Number: "<<endl;
       cout<<"1. Add Vertex"<<endl;
       cout<<"2. Update Vertex"<<endl;
       cout<<"3. Delete Vertex"<<endl;
       cout<<"4. Add Edge"<<endl;
       cout<<"5. Update Edge"<<endl;
       cout<<"6. Delete Edge"<<endl;
       cout<<"7. Check if 2 vertices are neighbour"<<endl;
       cout<<"8. Print all neighbours of a vertex"<<endl;
       cout<<"9. Print Graph"<<endl;
       cout<<"10. Clear Screen"<<endl;
       cout<<"0. Exit"<<endl;
       
       cin>>option;
       switch (option)
       {
        case 0:
           break;
        case 1:
           cout<<"Add Veretex Operation!"<<endl;
           cout<<"Enter state id: ";
           cin>>id;
           cout<<"Enter state name: ";
           cin>>sname;
           v1.setID(id);
           v1.setSName(sname);
           g1.addVertex(v1);
           break;
        case 2:
           
           break;
        case 3:
           
           break;
        case 4:
           
           break;
        case 5:
           
           break;
        case 6:
           
           break;
        case 7:
           
           break;
        case 8:
           
           break;
        case 9:
           
           break;
        case 10:
           
           break;
       
       default:
           break;
       }

    } while (option!=0);
    
   return 0;
}