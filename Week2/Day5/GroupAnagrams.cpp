#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mpp;
    for(int i = 0; i < n; i++) {
        string s = strs[i];
        sort(s.begin(), s.end());
        mpp[s].push_back(strs[i]);
    }
    for(auto x : mpp) {
        ans.push_back(x.second);
    }
    return ans;
}
int main() {
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(str);
    for(auto group : ans) {
        cout << "[ ";
        for(auto word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
