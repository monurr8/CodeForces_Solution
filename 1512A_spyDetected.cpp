#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int res=INT_MIN;
        if(arr[0] != arr[1]  &&  arr[0] != arr[2])
        {
            res = 0;
            cout<<(++res)<<endl;
            continue;
        }

        if(arr[n-1] != arr[n-2] && arr[n-1]!=arr[n-3])
        {
            res = n-1;
            cout<<(++res)<<endl;
            continue;
        }


        for(int i=1;i<(n-1);i++)
        {
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1])
            {
                cout<<(++i)<<endl;
            }
        }

        

    }
    return 0;
}