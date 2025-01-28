#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count,j,i;
    string str[100];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        count = 0;

        cin >> str[i];
        for ( j = 0; j <=i; j++)
        {
            if (str[i] == str[j]&&j!=i)
            {
                count++;
                // cout << count << endl;
            }
        }

        if (count != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // for(i=0;i<n;i++)
    // {
    //     cout<<str[i]<<endl;
    // }
}