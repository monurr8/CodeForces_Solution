#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int count=1;
        bool flag = false;
        if(n==1 || n==2)
        {
            cout<<1<<endl;
        }
        if(n>2)
        {
        for(int i=3;i<=n;i=i+x)
        {
            if(i+(x-1)<n)
            {
                count++;
                continue;
            }
            else 
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            cout<<++count<<endl;
        }
        }
        
    }
    return 0;
}