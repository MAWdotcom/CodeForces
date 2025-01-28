#include<bits/stdc++.h>
using namespace std;

int main()
{
    string g;
    int n,a=0,b=0;
    cin>>n;
     cin>>g;
    
    for(int i=0;i<n;i++)
    {
       

        if(g[i]=='A')
        {
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b)
    {
        cout<<"Anton"<<endl;
    }
    else if(b>a){
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

}