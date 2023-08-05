#include<iostream>
#include<bits/stdc++.h>


using namespace std;

class Queue
{
    stack<int> s1,s2;

    public:
        void push(int val)
        {
            s1.push(val);
        }   

        int pop()
        {
            if (s1.empty() && s2.empty())
            {
                cout<<"QUEUE IS EMPTY"<<endl;
                return 0;
            }
            else
            {
                if (s2.empty())
                {
                    while (!s1.empty())
                    {
                        s2.push(s1.top());
                        s1.pop();
                    }
                    
                }

                int temp = s2.top();
                s2.pop();
                return temp;
                
            }
            
            
        }

        bool isEmpty()
        {
            if (s1.empty() && s2.empty())
            {
                return true;
            }
            else 
                return false;
        }
};

int main()
{



    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop();
   return 0;
}