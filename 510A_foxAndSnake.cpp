#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    char arr[n][m];
    fill(*arr, *arr + n*m, '.');

    
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(i%2 == 0)
        {
            arr[i][j]='#';
        }
        else
        {
            
            arr[i][m-1]='#';

        }

      }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
