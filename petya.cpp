#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n,m;
    cin>>n>>m;

    // transform(n.begin(),n.end(),n.begin(),::tolower);
    // transform(m.begin(),m.end(),m.begin(),::tolower);
    
    for(int i=0;i<n.length();i++)
    {
        n[i]=tolower(n[i]);
        m[i]=tolower(m[i]);
    }
  
        if(n==m)
        {
            cout<<"0"<<endl;
        }
        else if(n < m)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        
   

        
    
}