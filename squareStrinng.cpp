#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len % 2 == 0)
        {
            string fst = str.substr(0, (len / 2) );
            string secd = str.substr(len / 2, len-1);
            // cout<<fst<<" "<<secd<<endl;
            int result=fst.compare(secd);
            if (result==0)
            {
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}