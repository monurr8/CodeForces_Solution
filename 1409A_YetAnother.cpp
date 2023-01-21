#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        int diff = abs(b-a);
        int count=0;
        while(true)
        {
            if(diff == 0)
            {
                break;
            }
          else  if(diff>10)
            {
                diff = diff - 10;
                count++;
            }
            else
            {
                count++;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}