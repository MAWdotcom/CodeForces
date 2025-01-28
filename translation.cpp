#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n,m,x;
    cin>>n;
    cin>>m;
    reverse(n.begin(),n.end());
    x=n;
    if(m==x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // cout<<n<<endl;
    // cout<<m<<endl;
}