#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    string n;
    cin>>n;
    sort(n.begin(),n.end());
    for(int i =0;i<n.size();i++)
    {   
        // cout<<n[i]<<" ";
        if(n[i]!=n[i+1])
        {
            count++;
        }
        // cout<<endl;
    }
    
    // cout<<n<<endl;
    // cout<<n.size()<<endl;
    // cout<<count<<endl;
    if(count % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}