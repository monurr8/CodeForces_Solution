#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;cin>>x1>>x2>>x3;
    vector<int>v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    sort(v.begin(),v.end());

    cout<<(v[1]-v[0])+(v[2]-v[1])<<endl;

    return 0;
}