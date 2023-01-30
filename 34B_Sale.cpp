#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
  
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
   int neg=0;
   int pos=0;
   for(int i=0;i<m;i++)
   {
    if(arr[i]<0)
    {
        neg=neg+arr[i];
    }
   
   }

   cout<<abs(neg)<<endl;

    return 0;
}