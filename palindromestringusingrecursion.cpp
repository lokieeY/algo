#include<iostream>
using namespace std;
bool checkpal(string &str,int s,int e)
{
    if(s>=e)
        return true;
    if(str[s]!=str[e])
        return false;
    return checkpal(str,s+1,e-1);
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int s=0,e=str.length()-1;
    if(checkpal(str,s,e))
        cout<<"String is a palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}