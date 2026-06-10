#include<bits/stdc++.h>
using namespace std;
bool validanagram(string s, string t){
    int n=s.size();
    int m=t.size();
    if(n!=m) return false;
    vector<int> f1(26,0);
    vector<int>f2(26,0);
    for(int i=0;i<n;i++){
        f1[s[i]-'a']++;
    }
    for(int j=0;j<m;j++){
        f2[t[j]-'a']++;
    }
    return f1==f2;
}
int main(){
    string s="anagram";
    string t="nagaram";
    cout<<validanagram(s,t);
    return 0;
}
