#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    int sol=0;
    while(t--)
    {
        int p,v,t;
        cin>>p>>v>>t;
        int c=0;
        if(p==1)
            c++;
        if(v==1)
            c++;
        if(t==1)
            c++;

        if(c>=2)
            sol++;
        
    }
    cout<<sol<<endl;
    return 0;
}