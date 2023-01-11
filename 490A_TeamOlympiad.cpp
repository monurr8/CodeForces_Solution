#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1) c1++;
        if(arr[i] == 2) c2++;
        if(arr[i] == 3) c3++;
    }
    int sol = min(c1,min(c2,c3));
    cout<<sol<<endl;
    vector<int> id1,id2,id3;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1) id1.push_back(i);
        else if(arr[i] == 2) id2.push_back(i);
        else id3.push_back(i);
    }
    
    for(int i=0;i<sol;i++)
    {
        cout<<++id1[i]<<" "<<++id2[i]<<" "<<++id3[i]<<endl;
    }

    


    return 0;
}