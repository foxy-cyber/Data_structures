#include<iostream>
using namespace std;
class Elements
{
    public:
    int i, j, ele;

};
class Sparse
{
    public:
    int m, n, nz;
    Elements *ob;
    Sparse(int m , int n , int nz)
    {
        this->m = m;
        this->n = n;
        this->nz = nz;
        ob = new Elements[nz];
    }
    ~Sparse()
    {
        delete [] ob;
    }
    void read()
    {
        cout<<"Enter non zero elements in form of 'row'_'column'_'element' :\n";
        for(int i=0; i<nz; i++)
            cin>>ob[i].i>>ob[i].j>>ob[i].ele;
    }
    void display()
    {
        int k =0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ob[k].i==i && ob[k].j==j)//if both the rows and columns are matching then that is a non zero element
                    cout<<ob[k++].ele<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Sparse m1(4,4,4);
    m1.read();
    m1.display();
}
