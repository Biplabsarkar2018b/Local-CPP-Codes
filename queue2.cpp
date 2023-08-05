#include<iostream>
using namespace std;

class Queue
{
    int arr[5];
    int front,rear;

    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            }
            
        }

        bool isEmpty()
        {
            if (rear==-1 && front==-1)
            {
                return true;
            }
            else
                return false;
            
        }

        bool isFull()
        {
            if (rear==4)
            {
                return true;
            }
            else
                return false;
            
        }

        void enqueue(int val)
        {
            if (isFull())
            {
                cout<<"QUEUE IS FULL"<<endl;
                return;
            }
            else if (isEmpty())
            {
                front++;
                rear++;
            }
            else
            {
                rear++;
            }
            arr[rear] = val;
            
            
            
        }

        int dequeue()
        {
            if (isEmpty())
            {
                cout<<"QUEUE IS EMPTY"<<endl;
                return 0;
            }
            else if (front == rear)
            {
                int temp = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
                return temp;
            }
            else
            {
                int temp = arr[front];
                arr[front] = 0;
                front++;
                return temp;
            }
        }

        
};

int main()
{
   return 0;
}