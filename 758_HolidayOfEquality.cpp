#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int count=0;
    int maxx=arr[n-1];
    
    for(int i=0;i<n;i++)
    {
        count=count + (maxx - arr[i]);
    }
    cout<<count<<endl;
    return 0;
}