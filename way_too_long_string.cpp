#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.length()<=10)
            cout<<s<<endl;
        else {
            string temp;
            int n=s.length() - 2;
            temp = s[0] + to_string(n) + s[s.length() -1];
            cout<<temp<<endl;
        }


    }
    return 0;
}