#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d = 0;
    string x;
    cin >> n;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        x[i] = tolower(x[i]);
    }

    sort(x.begin(), x.end());
    for (int i = 0; i < n; i++)
    {
        if (x[i] != x[i + 1])
        {
            d++;
        }
    }
    if (d == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}