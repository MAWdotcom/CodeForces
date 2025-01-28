#include <bits/stdc++.h>
using namespace std;

#include<stdio.h>
int main()
{
   string str,str1="";
   cin>>str;
   transform(str.begin(),str.end(),str.begin(),::tolower);
   for(int i =0;i<str.length();i++)
   {
    if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' &&str[i]!='u' )
    {
        str1=str1+str[i];
    }
   }
   for(int i=0;i<str1.length();i++)
   {
    cout<<"."<<str1[i];
   }
   cout<<endl;
   
}


