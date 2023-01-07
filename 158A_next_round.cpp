#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int sol=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
            sol++;
    }
    cout<<sol<<endl;
    return 0;

}