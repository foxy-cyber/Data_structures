#include<iostream>
using namespace std;
#define MAX 5

class CQueue
{
    private:char *CQ;int front,rear,n;
    public:
    CQueue()
    {
        front=rear=0;
        n=MAX;CQ = new char[n];
    }
    void enQ(char x)
    {
        if(front==(rear+1)%n){cout<<"CQ full\n";return;}
        rear=(rear+1)%n;CQ[rear]=x;
    }
    char deQ()
    {
        char x;
        if(front==rear){cout<<"CQ empty\n";return x;}
        front =(front+1)%n;x=CQ[front];
        return x;
    }
    void display()
    {
        if(front==rear){cout<<"CQ empty\n";return;}
        for(int i=front;i<rear;i++)
            cout<<CQ[(i+1)%n]<<" ";
        cout<<endl;
    }
};
int main()
{
    CQueue ob;
    ob.enQ('u');
    ob.enQ('p');ob.enQ('t');ob.enQ('o');ob.enQ('q');ob.display();
    ob.deQ();ob.deQ();ob.deQ();ob.deQ();ob.deQ();ob.display();

}
