#include <iostream>
using namespace std;
#define MAX 100
class Node
{
    public: 
    Node *left, *right; int data;
    public:
    Node()
    {right=left=NULL;data=0;}
    Node(int x)
    {
        data = x;left = right = NULL;
    }
    friend class Tree;
    
};

class CircularQ
{
    private:
    int size,front,rear,count;
    Node **Q;
    public:
    CircularQ()
    {
        front=rear=0;
        size=MAX+1;
        count=0;
        Q=new Node*[size];
    }
    void enQ(Node *x) 
    {
        if(isFull())
            cout<<"Circular Queue is full\n";
        else
        {
            rear=(rear+1)%size;
            Q[rear]=x;
            cout<<" inserted \n";
            count++;
        }
    }
    Node* deQ()
    {
        if(isEmpty())
            {cout<<"Circular Queue is empty\n";}

        else
        {
            front=(front+1)%size;
            count--;
            cout<<" deleted \n";
            return Q[front];
        }
    }
    bool isEmpty()
    {return front==rear;}
    bool isFull()
    {return front==(rear+1)%size;}
};
class Tree
{
    private:
    Node *root,*p,*t;CircularQ q;
    public:
    Tree()
    {root=NULL;}
    Node* create()
    {
        int x;
        cout << "Enter root value:";
        cin>>x;
        root = new Node();
        root->data = x;
        root->left =root->right=NULL;
        q.enQ(root);
        p=root;
        while(!q.isEmpty())
        {
            p = q.deQ();
            cout<<"Enter left child of "<<p->data<<" ";
            cin>>x;
            if(x!=-1)
            {
                t= new Node();
                t->data =x;
                t->left =t->right=NULL;
                p->left =t;
                q.enQ(t);
            }
            cout<<"Enter right child of "<<p->data<<" ";
            cin>>x;
            if(x!=-1)
            {
                t= new Node();
                t->data =x;
                t->left =t->right=NULL;
                p->right =t;
                q.enQ(t);
            }
        }
        return root;
    }
    void preorder(Node *t)
    {
        if(t)
        {
            cout<<t->data<<" ";
            preorder(t->left); 
            preorder(t->right);
        }
    }
};
int main()
{
    Tree ob;
    Node *root = ob.create();
    cout<<"Preorder:";ob.preorder(root);
}
