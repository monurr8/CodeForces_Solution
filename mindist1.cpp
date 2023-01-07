#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
bool checkMin(string s)
{
    bool flag = false;

    for(int i=0;i<s.length()-1 ;i++)
    {
        if(s[i] == '1' && (s[i] == s[i+1]))
        {
            flag = true;
            break;
        }
    }
    if(flag ==  true)
    {
        return true;
    }
    else 
        return false;
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
        int n;cin>>n;
        string s;cin>>s;

        if(s.length() == 2)
        {
            cout<<1<<endl;
        }
        else if(s.length() == 3 )
        {
            if(checkMin(s) == true)
            {
                cout<<1<<endl;
            }
            else 
            {
                cout<<2<<endl;
            }
        }

        else 
        {
            if(checkMin(s) == true)
            {
                cout<<1<<endl;
            }
            else 
            {
                int k=3;
                for(int i=0;i<=n-2;i++)
                {
                    reverseStr(s.substr(i,i+k));
                }
            }
        }

    }
	return 0;
}
