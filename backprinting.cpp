#include<iostream>
using namespace std;
void backcount(int n)
{
    if(n==-1)
        return;
    
    cout<<n<<" ";
    backcount(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    backcount(n);
    cout<<endl;
    return 0;
}
 