#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n,m,x,j,count=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>m;
//         for( j=1,count=0;j<m;j++)
//         {
//             count++;
//         }
//         cout<<count<<endl;
//     }
// }

int main(){
    int n,m;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        cout<<m-1<<endl;
    }

}


// MD Tafsin
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         cin>>n;
//         int a,b;
//         int count=0;
//         for(b=n-1; b>=1; b--){
//             for(a=1; a<n; a++){
//                 if(a+b==n){
//                     count++;
//                 }
//             }
//         }
//         cout<<count<<endl;
//     }
// return 0;
// }