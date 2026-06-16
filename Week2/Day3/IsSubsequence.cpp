#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]) i++;
            j++;
        }
        if(i==s.size()) return true;
        return false;      
}
int main(){
    string s="abc";
    string t="ahbgdc";
    cout<<isSubsequence(s,t);
    return 0;
}
