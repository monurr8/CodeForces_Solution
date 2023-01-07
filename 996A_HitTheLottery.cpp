#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;

    int temp=n;
    int count=0;
    while(temp!=0)
    {
        if(temp>=100)
        {
            temp=temp-100;
            count++;
        }
        else if(temp>=20)
        {
            temp=temp-20;
            count++;
        }
        else if(temp>=10)
        {
            temp=temp-10;
            count++;
        }
        else if(temp>=5)
        {
            temp=temp-5;
            count++;
        }
        else 
        {
            count=count+temp;
            temp-=temp;
        }
    }
    cout<<count<<endl;
    
    return 0;
}