
// Design a C++ program that uses functions to perform the following:
// a. Create a binary search tree of integers.
// b. Search for an integer key in the above binary search tree non recursively.
// c. Search for an integer key in the above binary search tree recursively.

#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* left;
    Node* right;

public:
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }

    friend class BST;
};

class BST {
public:
    Node* root;

public:
    BST() {
        root = NULL;
    }

    void create()
    {
        int x;
        cout << "Enter root value:";
        cin>>x;
        root = new Node(x);
        Node *p,*t;
        cout<<"Enter remaining values, or -1 to skip\n";
        while(1)
        {
            cin>>x;
            if(x==-1)
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
    }

    Node* isearch(int key) {
        Node* p = root;
        while (p != NULL) {
            if (key == p->data)
                return p;
            else if (key < p->data)
                p = p->left;
            else
                p = p->right;
        }
        return NULL;
    }

    Node* rsearch(Node* p, int key) {
        if (p == NULL)
            return NULL;
        else if (key == p->data)
            return p;
        else if (key < p->data)
            return rsearch(p->left, key);
        else
            return rsearch(p->right, key);
    }
};

int main() {
    BST ob;
    ob.create();

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    Node* p = ob.isearch(key);
    if (p != NULL)
        cout << key << " found in the tree (non-recursive search)\n";
    else
        cout << key << " not found in the tree (non-recursive search)\n";

    p = ob.rsearch(ob.root, key);
    if (p != NULL)
        cout << key << " found in the tree (recursive search)\n";
    else
        cout << key << " not found in the tree (recursive search)\n";

    return 0;
}