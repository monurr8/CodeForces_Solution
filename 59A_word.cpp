#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]) )
            c1++;
        else
            c2++;
    }
    if(c1>c2)
    {
        transform(s.begin(), s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else if(c1==c2)
    {
        transform(s.begin(), s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(), s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
        
    
    return 0;
}