#include<bits/stdc++.h>
using namespace std;

int main(){

int l1,r1,l2,r2;
cin>>l1>>r1>>l2>>r2;
int a,b;

if((l2<l1 && r2<l1) || (l1<l2 && r1<l2)){

    cout<<"-1"<<endl;

}
else{
    if(l1>l2){
        a=l1;
    }
    else{
        a=l2;
    }
    if(r1>r2){
        b=r2;
    }
    else{
        b=r1;
    }
cout<<a<<" "<<b<<endl;
}

}

//167959139 167959139 167959139 167959139