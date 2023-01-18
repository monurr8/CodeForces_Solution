#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=6;
        int front=0,back=0;
        int i=0,j=5;
        while(i<j)
        {
            front =front+(s[i]-48);
            back = back+(s[j] - 48);
            i++;j--;
        }
        if(front == back)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}