//Input = Santosh Kumar Vinod Kumar Gupta
//Output = Gupta S. K. V. K.

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string \n";
    getline(cin,s);
    cout<<"string is \n";
    cout<<s<<endl;

    int len = s.length();

    cout<<"String len = "<<len<<endl;
    int count = 0,w_count = 0, i = 0,j = 0;

    for(i = len; i>=0 ; i--)
    {
        w_count++;
        if(s[i] == ' ')
        {
            break;
        }
    }
    cout<<"Whitespace = "<<w_count<<endl;
    int lw = w_count-2;
    cout<<"Whitespace = "<<w_count<<endl;
    int k = len - w_count;
    
    for(i = 0,j = len-lw; j < len ; j++,i++)
    {
        cout<<s[j];
    }
    cout<<" ";
    for(i = 0 ; i < k ; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cout<<s[i]<<". ";
        }
    }
}