#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str, pat,rep;
    cout << "Enter main string: ";
    getline(cin,str);
    cout << "Enter pattern string: ";
    getline(cin,pat);
    cout << "Enter replace string: ";
    getline(cin,rep);

    // Perform pattern matching
    int patLen = pat.length();
    int strLen = str.length();
    int repLen = rep.length();
    
    bool found = false;
    for (int i = 0; i <= strLen - patLen; i++) 
    {
        int j;
        for (j = 0; j < patLen; j++) 
            if (str[i + j] != pat[j]) 
                break;
        if (j == patLen) 
        {
            found = true;
            if(patLen!=repLen)
            {
                cout<<"Pattern found in the main string but ";
                cout<<"Invalid length of replace string!\n";
                exit(0);
            }
            int k = i;
            for (j = 0; j < repLen; j++) 
                str[k++] = rep[j];
        }
    }
    if ((found) && patLen==repLen) 
        cout << "The modified string is: " << str << endl;
    else 
        cout << "Pattern not found in the main string" << endl;
    
    return 0;
}
 