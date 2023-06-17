#include<iostream>
using namespace std;
class Node
{
    private:
    int data;Node *left, *right;
    public:
    Node(int x)
    {
        data = x;
        left= right = NULL;
    }friend class Tree;
};
class Tree
{
    public:
    Node *root;
    Tree()
    {root = NULL;}
    void Create()
    {
        int x;
        cout<<"Enter root value: ";cin>>x;
        root = new Node(x);
        Node *p,*t;
        cout<<"Enter the remaining values (-1 to skip): ";
        while(1)
        {
            cin>>x;
            if(x==-1) break;
            t = new Node(x);
            p=root;
            while(1)
            {
                if(p->data==x)
                {
                    cout<<"Already in the tree\n";break;
                }
                else if(p->data<x)
                {
                    if(p->right==NULL)
                    {p->right=t;break;}
                    p=p->right;
                }
                else
                {
                    if(p->left==NULL)
                    {p->left=t;break;}
                    p=p->left;
                }
            }
        }
    }
    Node* isearch(int key)
    {
        Node *p = root;
        while(p!=NULL)
        {
            if(p->data==key)return p;
            else if(key>p->data)p=p->right;
            else p=p->left;
        }
        return NULL;
    }
    Node *rsearch(Node *p, int key)
    {
        if(p==NULL)return NULL;
        else if(p->data==key)return p;
        else if(key>p->data) rsearch(p->right,key);
        else rsearch(p->left,key);
    }
};
int main()
{
    Tree ob;
    ob.Create();
    if(ob.isearch(18)!=NULL)
    cout<<18<<" found\n";
    else cout<<"NOT found\n";
    if(ob.rsearch(ob.root,17)!=NULL)
    cout<<17<<" found\n";
    else cout<<"NOT found\n";
}