#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0 ;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

int binarySearch(int a[50], int n, int data)
{
    int l, r, mid;
    l = 0;
    r = n - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            return mid;
        }
        else if (data > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int x[50];
    int n, a, b;

    cin >> n;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    bubbleSort(x,n);

    int check= binarySearch(x,  n, a);
      for (int i = 0; i < n; i++)
    {
       cout<< x[i]<<" ";
    }
     if(check != -1)
     {
        cout<<check<<endl;
     }
     else{
        cout<<"no";
     }
}
