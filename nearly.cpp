// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int count=0,c=0;
//     string n;
//     cin>>n;

//     for(int i=0;i<n.length();i++)
//     {
//         if((n[i]!='4'|| n[i]!='7'))
//         {
//             count++;
//         }
//         if((n[i]=='4'|| n[i]=='7'))
//         {
//             c++;
//         }
//     }
//     if(count==0&&c>0)
//     {
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     cout<<count<<endl;
//     cout<<c<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,c=0;
    string n;
    cin>>n;

    for(int i=0;i<n.length();i++)
    {
        if((n[i]=='4'|| n[i]=='7'))
        {
            c++;
        }
    }
    if(c==7 || c==4)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // cout<<count<<endl;
    // cout<<c<<endl;
}