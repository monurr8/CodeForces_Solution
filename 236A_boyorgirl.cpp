#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    int count=0;
    for(int i=0;i<s.length()-1 ;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

       return 0;
}