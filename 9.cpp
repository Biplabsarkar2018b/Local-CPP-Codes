#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;

        Heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;

            while (index > 1)
            {
                int parent = index/2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }else
                {
                    return;
                }
                
            }
            
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }
        


        //delete code is incomplete
        void deletion(){
            if(size==0) return;
            arr[1] = arr[size];
            size--;

            int i = 1;
            while (size>i)
            {
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;

                if(leftIndex<size && arr[i]<arr[leftIndex]){
                    swap(arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                if(rightIndex<size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i = rightIndex;
                }

            }
            
        }
        

};

int main()
{   Heap h;
    h.insert(67);
    h.insert(45);
    h.insert(89);
    h.insert(54);
    h.insert(34);
    h.insert(23);
    h.insert(56);
    h.insert(90);
    h.insert(98);
    h.insert(87);
    h.insert(65);
    h.insert(43);
    h.insert(32);
    h.insert(12);
    h.insert(67);
    h.insert(109);
    h.insert(3746);
    h.insert(756);
    h.insert(3);

    h.print(); 
   return 0;
}