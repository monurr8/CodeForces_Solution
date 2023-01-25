#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cmax=1;
    int cmaxx=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            cmax++;
        }
        else
        {
            cmaxx = max(cmax,cmaxx);
            cmax = 1;
        }
    }
    cmaxx = max(cmax,cmaxx);
    cout<<cmaxx<<endl;
    return 0;
}