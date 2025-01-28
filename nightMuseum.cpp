#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,d,s;
    char in;
    string str;
    cin>>str;

    for(i=0,in='a',s=0;i<str.length();i++)
    {
       a= in - 'a';
       b= str[i]-'a';

        if(a>b)
        {
            d=a-b;
        }
        else
        {
            d=b-a;
        }
        if(d>13)
        {
            s=s+26-d;
        }
        else{
            s=s+d;
        }
    // s=s+str[i]-in;
       in=str[i];
      
    }
      cout<<s<<endl;
}