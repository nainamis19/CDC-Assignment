#include <bits/stdc++.h>
using namespace std;
string ans = "";
void expand(string &s, int left, int right)
{
    while(left >= 0 && right < s.size())
    {
        if(s[left] != s[right])
            break;
        left--;
        right++;
    }
    if(ans.size() < right - left - 1)
    {
        ans = s.substr(left + 1, right - left - 1);
    }
}
string longestPalindrome(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        expand(s, i, i);
        expand(s, i, i + 1);
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);
    return 0;
}
