#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int x)
    {next=NULL;data=x;}
}*head=NULL;

    Node* reverseBetween(Node* head, int left, int right) 
    {
        Node *t1,*p,*q;
        q=NULL;
        p=head;
        int i;
        t1=head;
        for(i=1;i<left;i++)
            t1=t1->next;
        Node *r= nullptr;
        for(i=1;i<=right;i++)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
            r->next=p;
        t1->next=q;
        
    return head;
        
    }
Node* create(int a[],int n)
{
    Node *t,*last;
    int i;
    head = new Node(a[0]);
    last=head;
    for(i=1;i<n;i++)
    {
        t = new Node(a[i]);
        last->next=t; 
        last=t;
    }
    return head;
}
void display(Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}
int main()
{
    int a[] = {1,2,3,4,5};
    Node *h1 = create(a,5);
    display(h1);cout<<endl;
    display(reverseBetween(h1,2,4));
}