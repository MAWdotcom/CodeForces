#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,a1,b1;
    double d1,r1,r2,t,d2,x,y;

    cin>>a>>b>>d1;
    cin>>a1>>b1>>d2;

    r1= b*d1;
    r2= b1*d2;

    t=r1+r2;

    cout<<"VALOR A PAGAR: "<<"R$ "<<fixed<<setprecision(2)<<t<<endl;


}