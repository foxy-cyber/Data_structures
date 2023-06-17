//Create a class BOOK with members ISBN, Title, Author and Price. Write 
// a C++ program to construct a stack data structure for N BOOK objects 
// and write member functions to perform the following operations on it: 
// a) PUSH-To add a new BOOK object to the stack 
// b) POP- To remove a BOOK object from the stac

#include<iostream>
using namespace std;
class Book
{
    private:
    string isbn,title,author;
    float price;
    public:
    Book();
    Book(string isbn, string title, string author, float price)
    {
        this->author=author;
        this->isbn=isbn;
        this->title=title;
        this->price=price;
    }
    void Display()
    {
        cout<<"ISBN: "<<isbn<<"\nTitle: "<<title<<"\nAuthor: "<<author<<"\nPrice: "<<price;
    }
};
class Book_Stack
{
    private:
    Book *ar;int n,top;
    public:
    Book_Stack(int n)
    {
        this->n=n;
        top=-1;
        ar = new Book[n];
    }
    void push(Book ob)
    {
        if(top==n-1)
            cout<<"Book stack is full\n";
        else
            ar[++top] = ob;
    }
    Book pop()
    {
        if(top==-1)
        {
        cout<<"Book Stack empty\n";
        return;
        }
        return ar[top--];
    }

};
int main()
{
    int n,loop=1;
    cout<<"Enter the number of the books: ";
    cin>>n;
    Book_Stack a(n);
    while(loop)
    {
        a.push(Book("11NT21W","LETUSC","AUTHOR",789));
        
        a.pop().Display();
        cout<<"To continue type 1, to exit 0\n";
        cin>>loop;
        if(!loop)
        exit(0);
    }
}