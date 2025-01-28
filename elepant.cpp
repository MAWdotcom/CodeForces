#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    double n;
    cin>>x;

    n=x/5;
    //cout<<ceil(n)<<endl;
    if(x%5!=0){
        n++;
    }
   cout<<n<<endl;
}