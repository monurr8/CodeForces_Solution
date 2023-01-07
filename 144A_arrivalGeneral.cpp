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
    int maxx = *max_element(arr, arr + n),minn = *min_element(arr,arr+n);
    
    int min_i=INT_MAX;
    int max_i=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == maxx)
        {
            min_i = min(min_i,i);
        }
        if(arr[i] == minn)
        {
            max_i = max(max_i,i);
        }
    }
    cout<<min_i<<" "<<max_i<<endl;
    int res = (min_i - 0) + (n-1- max_i);
    cout<<res;
    return 0;
}
//incorrect , this is not the correct swap function the code wants. please make sure to correct it later