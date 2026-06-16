#include<bits/stdc++.h>
using namespace std;
void solve(int open, int close, vector<string>& ans, string s, int n) {
    if(s.size() == 2 * n) {
        ans.push_back(s);
        return;
    }
    if(open < n) {
        solve(open + 1, close, ans, s + "(", n);
    }
    if(close < open) {
        solve(open, close + 1, ans, s + ")", n);
    }
}
int main() {
    int n;
    cin >> n;
    vector<string> ans;
    solve(0, 0, ans, "", n);
    for(string x : ans) {
        cout << x << endl;
    }
    return 0;
}
