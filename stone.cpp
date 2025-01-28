// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // vector<string>v;
//     string x;
//     int n,c=0,d=0,f=0;
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//        cin>>x[i];
//         if(x[i]=='R')
//         {
//             c++;
//         }
//         else if(x[i]=='G')
//         {
//             d++;
//         }
//         else{
//             f++;
//         }

        
//     }
//     if(c>d&&d<f)
//     {
//         cout<<d<<endl;
//     }
//     else if(d>c&&c<f)
//     {
//         cout<<c<<endl;
//     }
//     else{
//         cout<<f<<endl;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c<<"\n";

    return 0;
}