#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n,num=1;
    // cin>>n;

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }



    // int n=4;
    // for(int i =0;i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<" "<<i+1;
    //     }
    //     cout<<endl;
    // }

    // int n=3;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i+1;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

//reverse traingle
    // int n=4;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j>0;j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

//character traingle
    char ch='A';
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
