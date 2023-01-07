#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int count =0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //-------------------------------------
    for(int i=0;i<n;i++)
    {
        if((arr[i] == 10 && arr[i+1] == 10) || (arr[i] == 01 && arr[i+1] == 01))
        {
            continue;
        }
        else 
        {
            count++;
        }
    }
    // count++;
    cout<<count<<endl;
    return 0;
}