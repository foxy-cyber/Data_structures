#include<iostream>
#include<string>
using namespace std;
class String
{
    private:
    string str, pat,rep;
    int lastp,lasts,lastr,start=0,pfound=0;
    public:
    void input()
    {
        cout<<"Enter the string: ";
        cin>>str;
        cout<<"\nEnter the pattern string: ";
        cin>>pat;
        
    }
    void FindPattern()
    {
        int i, j,endmatch,inmatch;
        lasts = str.length()-1;
        lastp = pat.length()-1;
        for(endmatch=lastp;endmatch<=lasts;endmatch++,start++)
        {
            if(str[i]==pat[lastp])
            {
                inmatch = 0;
                j=0;
                while (j<lastp)
                {
                    if(str[inmatch]==pat[j])
                    {
                        inmatch++;
                        j++;
                    }
                    else
                    break;
                }
                if(j==lastp)
                {
                    pfound=1;
                    ReplacePattern();
                }
            }
        }
        if(pfound==0)
        cout<<"\nPattern not found\n";
        else
        cout<<"\nString after pattern match and replace is "<<str<<"\n";
        return;
    }
    void ReplacePattern()
    {
        cout<<"Enter string to replace: ";
        cin>>rep;
        int i,j;
        lastr = rep.length()-1;
        cout<<"String replace length is "<<lastr+1;
        if(lastp!=lastr)
        {
            cout<<"\nInvalid lenght of replace string \n";
            exit(0);
        }
        else
        {
            i=start;
            for(j=0;j<=lastr;j++)
            {
                str[i]=rep[j];
                i++;
            }
        }
        return;
    }
};
int main()
{
    String s;
    s.input();
    s.FindPattern();
}