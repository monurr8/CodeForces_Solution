#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool checkOrdi(int x)
{
    int countDig=floor(log10(x) + 1);
    int temp = countDig;
    if(countDig == 1)
        return true;
    
    if(countDig>1)
    {
        int digit = x%10;
        while(x!=0)
        {
            int curr_dig = x%10;
            x=x/10;

            if(curr_dig!=digit)
            {
                return false;
            }
        }

    }
    return true;

}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(checkOrdi(i) == true)
            {
                count++;
            }
        }

        cout<<count<<endl;
        
    }
    return 0;
}
//Time limit exceed for this solution