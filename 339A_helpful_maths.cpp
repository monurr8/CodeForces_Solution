#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    
    
    string temp;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '+')
        {
            continue;
        }
        else
        {
            temp[i] = s[i];
        }
    }

    sort(temp.begin() , temp.end());
    cout<<temp<<endl;
    

    return 0;
}