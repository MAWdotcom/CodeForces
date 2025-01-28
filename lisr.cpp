#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    list<int>::iterator it;
    int n;
       int x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
     
        cin >> x;
        if (x == 0)
        {
            int a;
            cin >> a;
            // it=li.begin();
            // advance(it,0);
            // li.insert(li.begin(), a);
            li.push_front(a);
        }
        else if (x == 1)
        {
            int b;
            cin >> b;
            if (b > 0)
            {
                li.pop_back();
            }
            else
            {
                li.pop_front();
            }
        }
        else
        {
            it = li.begin();
            advance(it, x);
            li.erase(it);
            // break;
        }
    }

    for (auto it :li)
    {
        cout << it << endl;
    }
}