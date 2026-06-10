#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        int n=s.size();
        map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==1) return i;
        }
        return -1;
    }
int maain(){
    string s="leetcode";
    int a=firstUniqChar(s);
    cout<<a;
    return 0;

}
