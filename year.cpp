#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k ;
    cin >> n;
    while (1)
    {
        n++;
        k = 0;
        string str = to_string(n);
        // if(str[0]!=str[1]&&str[1]!=str[2]&&str[2]!=str[3]&&str[3]!=str[0]str[]){
        //     cout<<n;
        //     break;
        // }
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (str[i] == str[j])
                {
                    //    continue;
                    k++;
                }
            }
        }

        if(k==0)
        {
            cout<<n<<endl;
            break;
        }

        // cout << k<<endl;;
    }
}