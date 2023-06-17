// 12. Design a C++ program that uses functions to perform the following:
// a. Create a binary search tree of characters.
// b. Traverse the above Binary search tree recursively in preorder,in order and post order.

#include <iostream>
using namespace std;
class Node
{
    private: 
    Node *left, *right; char data;
    public:
    Node()
    {right=left=NULL;}
    Node(char x)
    {
        data = x;left = right = NULL;
    }
    friend class Tree;
    
};

class Tree
{
    private:
    Node *root;char x;
    public:
    Tree()
    {root=NULL;}
    Node* create()
    {
        char x;
        cout << "Enter root value:";
        cin>>x;
        root = new Node(x);
        Node *p,*t;
        cout<<"Enter remaining characters, or 0 to skip\n";
        while(1)
        {
            cin>>x;
            if(x=='0')
            break;
            t= new Node(x);
            p=root;
            while(1)
            {
                if(p->data==x)
                {
                cout<<"Already present in tree\n";
                break;
                }
                else if(p->data>x)
                {
                    if(p->left==NULL)
                    {p->left=t;break;}
                    else p=p->left;
                }
                else 
                {
                    if(p->right==NULL)
                    {p->right=t;break;}
                    else p=p->right;
                }
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
    void inorder(Node *t)
    {
        if(t)
        {
            inorder(t->left);
            cout<<t->data<<" ";
            inorder(t->right);
        }
    }
    void postorder(Node *t)
    {
        if(t)
        {
            postorder(t->left);
            postorder(t->right);
            cout<<t->data<<" ";
        }
    }
};
int main()
{
    Tree ob;
    Node *tree = ob.create();
    cout<<"Preorder:";ob.preorder(tree);cout<<endl;
    cout<<"Inorder:";ob.inorder(tree);cout<<endl;
    cout<<"Postorder:";ob.postorder(tree);cout<<endl;
}