#include<iostream>
#include<stack>
#include<iterator>
using namespace std;

int main()
{   
    stack<int> st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
   return 0;
}