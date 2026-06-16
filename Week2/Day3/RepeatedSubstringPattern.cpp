#include<bits/stdc++.h>
using namespace std;
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if((n%i)!=0) continue;
            string str=s.substr(0,i);
            string temp="";
            int times=n/i;
            for(int i=0;i<times;i++){
                temp=temp+str;
            }
            if(temp==s) return true;

        }
        return false;
}
int main(){
    string s="abab";
    cout<<repeatedSubstringPattern(s);
    return 0;
}
