#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;

    int t=240;
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        t = t - (5*i);
        if(k>t)
        {
            break;
        }

        else
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
