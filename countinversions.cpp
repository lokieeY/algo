#include<iostream>
#include<vector>
using namespace std;
int mergeandcount(vector<int>&arr, int s,int mid,int e)
{
    int inversions=0;
    vector<int> temp;
    int i=s,j=mid+1;
    while(i<=mid && j<=e)
    {
        if(arr[i]>arr[j])
        {
            temp.push_back(arr[j]);
            inversions+=mid-i+1;
            j++;
        }
        else{
            temp.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
            i++;
    }
    while(j<=e)
    {
        temp.push_back(arr[j]);
            j++;
    }
    for(int k=s;k<=e;k++)
    {
        arr[k]=temp[k-s];
    }
    return inversions;
}

int mergesort(vector<int> &arr,int s,int e)
{
    if(s>=e)
        return 0;

    int mid=s+(e-s)/2;
    int leftcount=mergesort(arr,s,mid);
    int rightcount=mergesort(arr,mid+1,e);
    int crossinversions=mergeandcount(arr,s,mid,e);
    return leftcount+rightcount+crossinversions;
}
int main()
{
    vector<int> arr={3,7,10,14,18,19,2,11,16,17,23,25};
    int s=0,e=arr.size()-1;
    int ans=mergesort(arr,s,e);
    cout<<"Number of inversions : "<<ans<<endl;
    return 0;
    
}