#include<bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        return false;
        // counting the charcters
        vector<int>f1(26,0), f2(26,0);
        for(char ch:s1){
            f1[ch-'a']++;
        }   
        // current window
        for(int i=0;i<n;i++)
            f2[s2[i]-'a']++;
        
        if(f1==f2)
        return true;
        
        // sliding window
        for(int i=n;i<m;i++){
            f2[s2[i]-'a']++;
            f2[s2[i-n]-'a']--;
             
        
        if(f1==f2)
        return true;
    }
    return false;
    }
 int main(){
    string s="ab";
    string t="eidbaooo";

    cout<<checkInclusion(s,t);
    return 0;
 }   
