#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxparts(int length,int p1,int p2,int p3)
{
    if(length==0)
        return 0;
    
    if(length<0)
        return INT_MIN;
    int a=0;
    if(length-p1>=0)
        a=maxparts(length-p1,p1,p2,p3)+1;
    int b=0;
    if(length-p2>0)
        b=maxparts(length-p2,p1,p2,p3)+1;
    int c=0;
    if(length-p3>0)
        c=maxparts(length-p3,p1,p2,p3)+1;
    
    int maxi=max(a,max(b,c));
    return maxi;
}
int main()
{
    int length=7;
    int p1=5,p2=2,p3=2;
    int result=maxparts(length,p1,p2,p3);
    if(result<0)
        return 0;
    else
        cout<<"Maximum parts from the rod can be are : "<<result;
    return 0;
}