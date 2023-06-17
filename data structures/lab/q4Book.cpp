#include<iostream>
using namespace std;
class Book
{
    private:
    string isbn,title,author,price;
    public:
    Book()
    {
        isbn = " ";
    }
    void read()
    {
        cout<<"Enter ISBN,title, author, price respectively: ";
        cin>>isbn>>title>>author>>price;
    }
    void Display()
    {
        cout<<"\n================\n";
        cout<<"ISBN: "<<isbn<<"\ntitle: "<<title<<"\nauthor: "<<author<<"\nprice: "<<price;
        cout<<"\n================\n";
    }
};
class Stack
{
    private:
    int n,top;Book *st;
    public:
    Stack(int n)
    {
        top=-1;
        this->n = n;
        st = new Book[n];
    }
    void push(Book nb)
    {
        if(top==n-1)
        {
            cout<<"Stack is full!"<<endl;
            return;
        }
        top++;
        st[top] = nb;
    }
    Book pop()
    {
        Book del;
        if(top==-1)
        {
            cout<<"Stack is empty!"<<endl;
            return del;
        }
        del=st[top];
        top--;
        return del;
    }
};
int main()
{
    Stack ob(3);
    Book nb1,nb2;
    
    nb1.read();
    ob.push(nb1);
    cin.ignore();
    ob.pop().Display();
    nb2.read();
    ob.push(nb2);
    ob.pop().Display();
}