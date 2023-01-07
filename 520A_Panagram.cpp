#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string str;cin>>str;
    
    
    transform(str.begin(), str.end(),str.begin(), ::toupper);

    int mark[26] = {0};
    int index;

    for(int i=0;i<n;i++)
    {
        if(str[i]>= 'A' && str[i]<='Z')
        {
            index = str[i] - 'A';
        }
        mark[index] = 1;
    }

    bool flag = true;

    for(int i=0;i<=25;i++)
    {
        if(mark[i] == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    
       
    return 0;
}