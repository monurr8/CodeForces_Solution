#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+double(arr[i]);
    }

    cout<<(sum/n)<<endl;
    

    return 0;
}