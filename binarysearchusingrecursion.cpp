#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int& key)
{
    if(s>e)
        return -1;
    int mid =s+(e-s)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarysearch(arr,mid+1,e,key);
    else
        return binarysearch(arr,s,mid-1,key);
}
int main()
{
    int arr[50]={10,20,30,40,50,60,70,80};
    int n=8;
    int key=80;
    int s=0,e=n-1;
    int ans=binarysearch(arr,s,e,key);
    if(ans==-1)
        cout<<"Ans not found";
    else
        cout<<"Ans is at index : "<<ans;
    return 0;
}