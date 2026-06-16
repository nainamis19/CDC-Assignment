#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack,string needle){
        int n=haystack.size();
        int m=needle.size();
        char ch=needle[0];
        if(m>n)
        return -1;
        if(n>=m){
        int ans=haystack.find(needle);
        return ans;
        }
     return -1;
}

int main(){
    string s="leetcode";
    string t="leeto";
    int a=strStr(s,t);
    cout<<a;
    return 0;

}
