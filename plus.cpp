#include<bits/stdc++.h>
using namespace std;

int main(){
 int t,a,b,c,x,y;
 cin>>t;
 while (t--)
 {
    cin>>a>>b>>c;

    x=a+b;
    y=a-b;

    if(x==c){
        cout<<"+"<<endl;
    }
    else if(y==c){
        cout<<"-"<<endl;
    }
 }
 
}