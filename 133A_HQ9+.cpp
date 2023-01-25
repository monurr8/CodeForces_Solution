#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    
    int n=s.length();
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H'|| s[i] == 'Q'  || s[i] == '9')
        {
            flag = true;
        }
    }
    if(flag == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}