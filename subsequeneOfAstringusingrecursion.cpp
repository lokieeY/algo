#include<iostream>
using namespace std;
void printsubseq(string str,string ans,int i)
{
    if(i>=str.length())
    {
        cout<<ans<<endl;
        return;
    }
    //exclude call 
    printsubseq(str,ans,i+1);
    //include call
    ans.push_back(str[i]);
    printsubseq(str,ans,i+1);
}
int main()
{
    string str,ans;
    cout<<"Enter the string : ";
    cin>>str;
    int i=0;
    printsubseq(str,ans,i);
    return 0;
}