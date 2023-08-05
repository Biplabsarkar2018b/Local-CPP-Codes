#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    bool empty(){
        if (top==-1)
        {
            return true;
        }
        return false;
        
    }
    bool full(){
        if (top==size-1)
        {
            return true;
        }
        return false;
        
    }

    void push(int element){
        if (full())
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = element;
        
    }

    void pop(){
        if (empty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }else
        {
            arr[top] = 0;
            top--;
            return ;
        }
        
        
    }

    int peek(){
        return arr[top];
    }
    

};


int main()
{
   return 0;
}