#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int target(vector<int>arr,int key)
{
    if(key==0)
        return 0;
    if(key<0) 
        return INT_MAX;

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        int ans=target(arr,key-arr[i]);
        if(ans != INT_MAX)
            mini=min(mini,ans+1);
    }
    return mini;
}
int main()
{
    vector<int> arr{1,2,3};
    int key=7;
    int ans=target(arr,key);
    cout<<"minimum number of elements : "<<ans<<endl;
    return 0;
}