#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,d=0;
    int x[]={10,15,12,6,5};
    // cin>>n;

    cout<<"search item";
    cin>>a;
    for(int i=0;i<5;i++)
    {
        if(x[i]==a)
        {
            d++;
            break;
        }
    }
    if(d>0){
        cout<<"Founded"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}