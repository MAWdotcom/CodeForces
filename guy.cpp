#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,arr[200],i,j,count;
    cin>>n>>x;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cin>>y;
    for(int i=x;i<x+y;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(x+y));
    
    for(int i=0;i<x+y;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
  
}

// int main()
// {
//     vector<int>v;

//     int n,p,q,arr;
//     cin>>n;
//     cin>>p;
//     for(int i;i<p;i++)
//     {
//         cin>>arr;
//         v.push_back(arr);
//     }
//     cin>>q;
//     for(int i;i<q;i++)
//     {
//         cin>>arr;
//         v.push_back(arr);
//     }
//     sort(v.begin(),v.end());
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }


// }