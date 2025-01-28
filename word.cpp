#include <bits/stdc++.h>
using namespace std;

int main()
{
    int upper=0, lower;

    string n;
    cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        if ('A' <= n[i] && 'Z' >= n[i])
        {
            upper++;
        }
     }   
       lower=n.size()-upper;

        if (upper > lower)
        {
            transform(n.begin(),n.end(),n.begin(),::toupper);  
        }
        else 
        {
            transform(n.begin(),n.end(),n.begin(),::tolower);
        }
    
    cout << n << endl;
}