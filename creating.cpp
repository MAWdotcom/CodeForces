#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
  string a,b;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    // getline(cin,a);
    // getline(cin,b);
    cin>>a;
    cin>>b;
    // char x =a[0];
    // a[0]=b[0];
    // b[0]=x;
    swap(a[0],b[0]);
     cout<<a<<" "<<b<<endl;
  }
 
}