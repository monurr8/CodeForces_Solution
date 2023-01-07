#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int res=0;

    while(n--)
    {
    cin>>s;

    if( (s == "++X") || (s == "X++") )
    {
        res=res+1;
    }   
    
    if( (s == "--X") || (s == "X--") )
    {
        res=res-1;
    }


    }
    cout<<res<<endl;
    return 0;
}