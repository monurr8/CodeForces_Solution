#include<bits/stdc++.h>
using namespace std;
bool inRange(unsigned low, unsigned high, unsigned x)
{
    return  ((x-low) <= (high-low));
}
int main()
{

    string s;
    cin>>s;
    bool flag = false;
    if(inRange(61,122,int(s[0])) )
    {
        
    }
    

    return 0;
}