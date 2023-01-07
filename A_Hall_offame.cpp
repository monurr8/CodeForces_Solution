#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forn(i,x,n) for(int i=x;i<int(n);i++)

void hall_of_fame()
{
    int n;
        cin>>n;
        string s1;
        cin>>s1;
        int r = 0;
        for (auto i: s1)
        {
             if(i == 'R')r++;
        }
        if(r =0 or r == n)
        {
            cout<<-1<<endl; return;
        }
         for (int i=0; i<n-1; i++)
        {
             if(s1[i]  == 'L' and s1[i+1] == 'R')
            {
              cout<<i+1<<endl;
              return;
            }
            if(s1[i] == 'R' and s1[i+1] == 'L')
            {
            cout<<0<<endl;
            return;
            }
   }
   cout<<-1<<endl;
}
int main(){
    int t; cin>>t;
    while(t--)
    {
         hall_of_fame();
    }
    return 0;
}