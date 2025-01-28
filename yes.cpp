#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,d;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==s[i+1])
        {
            d++;
        }
    }
    
}
