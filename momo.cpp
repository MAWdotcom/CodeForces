#include<bits/stdc++.h>
using namespace std;

int main(){
long long int memo,momo,k;
cin>>memo>>momo>>k;

int a = memo%k;
int b= momo%k;
// cout<<a<<endl;
// cout<<b<<endl;
if(a==0 &&b==0){
    cout<<"Both"<<endl;
}
else if(a==0){
    cout<<"Memo"<<endl;
}
else if(b==0){
    cout<<"Momo"<<endl;
}
else{
    cout<<"No One"<<endl;
}


}

//799622991503877417 533081994335918278 266540997167959139