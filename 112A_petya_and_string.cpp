#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(),s2.begin(), ::toupper);
    
    
    bool flag=false;
    int p=0;
    for(int i=0;i<s1.length() ;i++)
    {
        if( s1[i] == s2[i] )
        {
            flag = true;
        }
        else
        {
            flag = false;
            p=i;
            break;
        }

    }

    if(flag == true)
    {
        cout<<0<<endl;
    }
    else 
    {
        if( s1[p]  <  s2[p] )
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }

    return 0;
}