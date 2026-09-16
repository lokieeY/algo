#include<iostream>
#include<limits.h>
using namespace std;
int max(int arr[],int n,int i,int &maxi)
{
    if(i>=n)
        return maxi;
    if(maxi<arr[i])
        maxi=arr[i];
    max(arr,n,i+1,maxi);

    return maxi;
}
int main()
{
    int arr[10]={13,56,973,678,345,32};
    int n=6;
    int maxi=INT_MIN;
    int i=0;
    int result=max(arr,n,i,maxi);
    cout<<"Maximiun in array : "<<result<<endl;
    return 0;
}