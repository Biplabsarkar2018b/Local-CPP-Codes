#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};



int main()
{

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    
   return 0;
}