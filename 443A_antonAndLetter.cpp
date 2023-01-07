#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;getline(cin,s);
    string temp ;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ',' || s[i] == ' ')
            continue;
        else
            temp = temp+s[i];
    }

    sort(temp.begin(),temp.end());

    int count=1;
    char temp2=temp[0];
    for(int i=1;i<temp.length();i++)
    {
        if(temp[i] == temp2)
        {
            continue;
        }
        else
        {
            count++;
            temp2=temp[i];
        }
    }

    cout<<count<<endl;
    return 0;
}