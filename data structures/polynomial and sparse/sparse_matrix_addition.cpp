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
    Sparse operator+(Sparse &s);
    friend istream & operator>>(istream &ip, Sparse &mx);// to read
    friend ostream & operator<<(ostream &op, Sparse &mx);// to display
    
};
Sparse Sparse :: operator+(Sparse &mx)
{
    int i,j,k;
    if(m!=mx.m ||  n!=mx.n)
        return ;
// m and n are same for both matrices no of no zero elements vary so add both of them i.e max resulting no of non zero elements is <=(nz+mx.nz)
    Sparse *sum = new Sparse(m,n,nz+mx.nz);
    i=j=k=0;
    while (i<nz && j<mx.nz)
    {
        if(ob[i].i<mx.ob[j].i)
        ;
    }
    

    


}

istream & operator>>(istream &ip, Sparse &mx)
{
    cout<<"Enter non zero elements in form of 'row'_'column'_'element' :\n";
    for(int i=0; i<mx.nz; i++)
        cin>>mx.ob[i].i>>mx.ob[i].j>>mx.ob[i].ele;
    return ip;
}
ostream & operator<<(ostream &op, Sparse &mx)
{
    int k =0;
    for(int i=0; i<mx.m; i++)
    {
        for(int j=0; j<mx.n; j++)
        {
            if(mx.ob[k].i==i && mx.ob[k].j==j)//if both the rows and columns are matching then that is a non zero element
                cout<<mx.ob[k++].ele<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return op;
}
int main()
{
    Sparse m1(4,4,4);
    cin>>m1;
    cout<<m1;
}
