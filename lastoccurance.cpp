// //left to right
// #include<iostream>
// using namespace std;
// int lastocc(string str,int i,char ch,int& ans)
// {
//     if(i>str.length())
//         return -1;
//     if(str[i]==ch)
//         ans=i;
//     return lastocc(str,i+1,ch,ans);
// }
// int main()
// {
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     char ch;
//     cout<<"Enter the character whose last occurance you want to find : ";
//     cin>>ch;
//     int i=0;
//     int ans=-1;
//     lastocc(str,i,ch,ans);
//     if(ans==-1)
//         cout<<"character is not present in the string";
//     else
//         cout<<"last occurance of character is at index "<<ans<<endl;
//     return 0;
// }


//right to left
#include<iostream>
using namespace std;
void rtol(string str,int i,char ch,int& ans)
{
    if(i<0)
        return;
    if(str[i]==ch)
    {
        ans=i;
        return;
    }    
    rtol(str,i-1,ch,ans);
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    char ch;
    cout<<"Enter the character whose last occurance you want to find : ";
    cin>>ch;
    int i=str.length()-1;
    int ans=-1;
    rtol(str,i,ch,ans);
    if(ans==-1)
        cout<<"character is not present in the string";
    else
        cout<<"last occurance of character is at index "<<ans<<endl;
    return 0;
}