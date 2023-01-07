#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int a,b;
        a=int(s[0]-48);
        b=int(s[2]-48);

        cout<<a+b<<endl;

    }
    return 0;
}