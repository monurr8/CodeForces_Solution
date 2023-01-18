#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long int t;cin>>t;
    while(t--)
    {
       long long int a;cin>>a;
  long long  int two = round(double(a)/3);
  long long int one = a - 2*(two);
        cout<<one<<" "<<two<<endl;
    }
    return 0;
}