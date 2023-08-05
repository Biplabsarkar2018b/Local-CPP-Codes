#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root){
    cout<<"Enter The Data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if (data==-1)
    {
        return NULL;
    }

    cout<<"Enter Data For Inserting In Left: "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter Data For Inserting In Right: "<<endl;
    root->right = buildTree(root->right);

    return root;
    
}

void levelOrderTraversal(Node* root){
    queue<Node*> q; 
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp==NULL)
        {
            cout<<endl;

            if (!q.empty())
            {
                q.push(NULL);
            }           
       }else
        {
            cout<<temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }      
        }
    } 
}


void inOrder(Node* root){
    if (root==NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);   
}

void preOrder(Node* root){
     if (root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node* root){
    if (root==NULL)
    {
        return;
    }

    
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
}


void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter Data For Root: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<root->data<<endl;
        int leftData;
        cin>>leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }


        cout<<"Enter right node for: "<<root->data<<endl;
        int rightData;
        cin>>rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
        
    }
    
}

int main()
{
    Node* root = NULL;
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    root = buildTree(root);

    cout<<"LevelOrder: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder: "<<endl;
    inOrder(root);
    cout<<endl;


    cout<<"PreOrder: "<<endl;
    preOrder(root);
    cout<<endl;


    cout<<"PostOrder: "<<endl;
    postOrder(root);
    cout<<endl;

   return 0;
}