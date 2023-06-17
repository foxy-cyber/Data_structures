#include<iostream>
using namespace std;
class Node
{
    private:
    Node *next;unsigned long data;
    public:
    Node(unsigned long x) {data = x;next = NULL;}
    friend class CLL;
};
class CLL
{
    private:
    Node *head;unsigned long x;
    public:
    Node* create()
    {
        cout<<"Enter head data(-1 to exit): ";cin>>x;if(x==-1){head=NULL;return NULL;}
        Node *t = new Node(x);
        t->next = head;
        head = t;
        Node *last = t;
        cout<<"Enter remaining data(-1 to exit) \n";
        while(1)
        {
            cin>>x;
            if(x == -1)break;
            t= new Node(x);
            t->next = head;
            last->next=t;
            last=t;
        }
        display(head);
        return head;
    }
    Node *addLL(Node *l1, Node *l2)
    {
        Node *h1=l1,*h2=l2;
        if(l1==NULL && l2==NULL)
        {
            cout<<"Circular LL empty!\n";
            return NULL;
        }
        Node *t;unsigned long sum=0;
        if(l1 && l2)
        {
            sum=l1->data+l2->data;
            l1=l1->next;
            l2=l2->next;
        }
        else if(l1==NULL && l2)
        {
            sum=l2->data;
            l2=l2->next;
        }else
        {
            sum=l1->data;
            l1=l1->next;
        }
        head = new Node(sum);
        head->next=head;
        Node *last = head;
        do
        {
            sum=l1->data+l2->data;
            l2=l2->next;l1=l1->next;
            t = new Node(sum);
            t->next=head;
            last->next=t;
            last=t;
        }while(l1!=h1 && l2!=h2);
        if(l1!=h1)
        {
            do
            {
                sum=l1->data;l1=l1->next;
                t = new Node(sum);
                t->next=head;
                last->next=t;
                last=t;
            }while(l1!=h1);
        }if(l2!=h2)
        {
            do
            {
                sum=l2->data;l2=l2->next;
                t = new Node(sum);
                t->next=head;
                last->next=t;
                last=t;
            }while(l2!=h2);
        }
        return head;        
    }
    void display(Node *t)
    {
        if(t != NULL)
        {
            Node *p=t;
            do
            {cout<<p->data<<" ";p=p->next;} 
            while (p!=t);  
        }
        cout<<endl;
    }

};
int main()
{
    CLL ob;
    Node *ll1= ob.create(),*ll2= ob.create(),*res;
    res=ob.addLL(ll1,ll2);
    cout<<"\nRESULT CLL:";
    ob.display(res);
}