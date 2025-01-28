#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    int m, result;
    cin >> m;
    

    while (m--)
    {
        int count=0;
        str2 = "codeforces";
        cin >> str1;

        for (int i = 0; i < str2.length(); i++)
        {
            
            
            // result=str1.compare(str2);
            if (str1[i] != str2[i])
            {

                count++;
            }
        }
        cout << count << endl;
    }
    // while (m--)
    // {
    //     int i=0;
    //        if(str1[i]==str2[i])
    //     {
    //         continue;
    //     }
    //     else{
    //         count++;
    //     }
    //    i++;
    // }
}