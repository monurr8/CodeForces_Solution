#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;cin>>k>>n>>w;
    int cost=0;
    for(int i=1;i<=w;i++)
    {
        cost = cost + k*i;
    }
    if(cost<=n)
    {
        cout<<0<<endl;
    }
    else 
    {
        cout<<(cost-n)<<endl;
    }
    return 0;
}