#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char x;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'o' || x == 'r' || x == 'c' || x == 'e' || x == 's')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}