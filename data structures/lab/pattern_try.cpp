#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pat, str, rep;bool found=false;
    cout<<"Enter main string: ";getline(cin,str);
    cout<<"Enter pattern string: ";getline(cin,pat);
    cout<<"Enter replace string: ";getline(cin,rep);
    int patLen = pat.length(),strLen = str.length(), repLen= rep.length();
    for(int i=0;i<=strLen-patLen;i++)
    {
        int j;
        for(j=0;j<patLen;j++)
            if(str[i+j]!=pat[j])
            break;
        if(j==patLen)
        {
            found=true;
            if(patLen!=repLen)
            {
                cout<<"Pattern string found but invalid length of replace string\n";
                exit(0);
            }
            int k=i;
            for(j=0;j<repLen;j++)
            str[k++]=rep[j];
        }
    }
    if(found)
    cout<<"Pattern string found, modified string:"<<str<<endl;
    else
    cout<<"Pattern string not found\n";
}