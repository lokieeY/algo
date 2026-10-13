#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &arr)
{
    cout<<"The array is : ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
void merge(vector<int>&arr,int s,int mid, int e)
{
    vector<int> temp;
    int i=s;
    int j=mid+1;
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr[j]);
            j++;
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

    //copy from temp to arr
    for(int k=s;k<=e;k++)
    {
        arr[k]=temp[k-s];
    }
}
void mergeSort(vector<int> &arr,int s,int e)
{
    if(s>=e)
        return ;
    
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);
}
int main()
{
    int n;
    cout<<"Enter number of elements in the array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter "<<i+1<<"th element : ";
        cin>>arr[i];
    }
    printArray(arr);
    int s=0,e=arr.size()-1;
    mergeSort(arr,s,e);
    cout<<endl<<"After Sorting : ";
    printArray(arr);
    return 0;
}