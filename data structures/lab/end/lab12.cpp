#include<iostream>
using namespace std;
class Node
{
    private:
    char data;Node *left, *right;
    public:
    Node(char x)
    {
        data = x;
        left= right = NULL;
    }friend class Tree;
};
class Tree
{
    private:
    Node *root;
    public:
    Tree()
    {root = NULL;}
    Node* Create()
    {
        char x;
        cout<<"Enter root value: ";cin>>x;
        root = new Node(x);
        Node *p,*t;
        cout<<"Enter the remaining values (0 to skip): ";
        while(1)
        {
            cin>>x;
            if(x=='0') break;
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
        return root;
    }
    void Inorder(Node *t)
    {
        if(t)
        {
            Inorder(t->left);
            cout<<t->data<<" ";
            Inorder(t->right);
        }
    }
};
int main()
{
    Tree ob;
    Node *root = ob.Create();
    ob.Inorder(root);
}