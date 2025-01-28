#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1="hello";
    cin>>str;
    int count=0;

    for(int i =0,j=0;i<str.length();i++)
    {
       if(str[i]==str1[j])
       {
        count++;
        j++;
       }

    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="";
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='h' || str[i]=='e' || str[i]=='l' || str[i]=='l' || str[i]=='o')
        {
            str1=str1+str[i];
        }
    }
    cout<<str1<<endl;
    for(int i=0,j=0; i<str1.length(); i++)
    {
        if(str1[i]!=str1[j])
        {
            cout<<str1[j];
        }
    }
    cout<<endl;
    return 0;

}