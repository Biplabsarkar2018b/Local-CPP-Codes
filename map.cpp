#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[12] = "Biplab";
    m[14] = "Ufel";
    m[15] = "Suman";
    m[19] = "samir";

    map<int,string>::iterator i;
    for ( i = m.begin(); i != m.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
   return 0;
}