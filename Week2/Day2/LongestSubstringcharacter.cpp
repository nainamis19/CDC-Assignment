#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        int l=0,r=0,maxlen=0;
        int hash[256];
        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        for(int r=0;r<n;r++){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
            hash[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
     
    }
   int main(){
    string s="abcabcbb";
    int a=lengthOfLongestSubstring(s);
    cout<<a;
    return 0;

   } 
