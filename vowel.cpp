#include <bits/stdc++.h>
using namespace std;

#include<stdio.h>
int main()
{
   string n,n1="";
   cin>>n;
   transform(n.begin(),n.end(),n.begin(),::tolower);
   for(int i =0;i<n.length();i++)
   {
    if(n[i]!='a' && n[i]!='e' && n[i]!='i' && n[i]!='o' &&n[i]!='u' )
    {
        n1=n1+n[i];
    }
   }
   for(int i=0;i<n1.length();i++)
   {
    cout<<"."<<n1[i];
   }
   cout<<endl;
   
}