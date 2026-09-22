#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;

    string ans = "";

    while (i >= 0 || j >= 0 || carry)
    {
        int digit = carry;

        if (i >= 0)
            digit += s1[i] - '0';

        if (j >= 0)
            digit += s2[j] - '0';

        ans += (digit % 10) + '0';

        carry = digit / 10;

        i--;
        j--;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string str1, str2;

    cout << "Enter first integer string : ";
    cin >> str1;

    cout << "Enter second integer string : ";
    cin >> str2;

    string result = add(str1, str2);

    cout << "The sum is : " << result << endl;

    return 0;
}