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

        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        sort(arr,arr+n);

        vector<int>v;
        int diff=0;
        for(int i=1;i<n;i++)
        {
            diff = abs(arr[i]-arr[i-1]);
            v.push_back(diff);
        }

        sort(v.begin(),v.end(),greater<int>());
        
        if(v[0]>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}