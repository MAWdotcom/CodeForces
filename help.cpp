#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sp;

    for(int i=0;i<s.length();i+=2)
    {
        for(int j=i+2;j<s.length();j+=2)
        {
            if(s[i]>s[j])
            {
               sp=s[i];
                s[i]=s[j];
                s[j]=sp;
            }
        }
    }
    cout<<s<<endl;
}