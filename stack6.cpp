#include<iostream>
using namespace std;

class Stack
{
    int top;
    int arr[5];

    public: 
        Stack()
        {
            top = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            }
            
        }

        bool isEmpty()
        {
            if (top==-1)
            {
                return true;
            }
            else
                return false;
            
        }

        bool isFull()
        {
            if (top==4)
            {
                return true;
            }
            else
                return false;
            
        }

        void push(int val)
        {
            if (isFull())
            {
                cout<<"STACK OVERFLOW"<<endl;
            }
            else
            {
                top++;
                arr[top] = val;
            }
           
        }

        int pop()
        {
            if (isEmpty())
            {
                cout<<"STACK UNDERFLOW"<<endl;
                return 0;
            }
            else
            {
                int temp = arr[top];
                arr[top] = 0;
                top--;
                return temp;
            }
            
        }

        
};

int main()
{
   return 0;
}