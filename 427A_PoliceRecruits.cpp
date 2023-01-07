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

    int crime=0,avl_p=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            avl_p = avl_p+arr[i];
        }

        if(arr[i] == -1 && avl_p <=0)
        {
            crime++;
        }

        if(arr[i] == -1 && avl_p>0)
        {
            avl_p--;
        }

    }

    cout<<crime<<endl;

    return 0;
}