// Design a C++ Program to perform the following operations on Linear 
// Queue of Integers (Array Implementation of Queue with maximum size 
// MAX)
// a. Insert an Element to a Linear Queue.
// b. Delete an Element from the Linear Queue. 
// c. Demonstrate Overflow and Underflow situations on Linear Queue 
// d. Display the status of Linear Queu
#define MAX 4
#include<iostream>
using namespace std;

class Queue 
{
    private:
    int *Q,n,front,rear;
    public:
    Queue()
    {
        n=MAX;
        Q=new int[n];
        front=rear=-1;
    }
    void enQ(int x)
    {
        if(rear==n-1){cout<<"QUEUE full\n";return;}
        Q[++rear]=x;
    }
    int deQ()
    {
        if(rear==front){cout<<"QUEUE empty\n";return -1;}
        return Q[++front];
    }
    void display()
    {
        if(rear==front)cout<<"QUEUE empty\n";
        for(int i=front+1;i<=rear;i++)
            cout<<" "<<Q[i];
        cout<<endl;
    }
};
int main()
{
    Queue ob;
    ob.enQ(1);
    ob.enQ(3);ob.enQ(31);ob.enQ(71);ob.enQ(51);ob.display();
    ob.deQ();ob.deQ();ob.deQ();ob.display();

}