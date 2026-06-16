#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        string temp="";
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(temp.begin(),temp.end());
                ans=ans+temp;
                ans=ans+" ";
                temp="";
            }
            else{
                temp=temp+s[i];
            }
        }
        reverse(temp.begin(),temp.end());
        ans=ans+temp;
        return ans;
}
int main(){
    string s="My Name Is Nayan Mishra";
    string str=reverseWords(s);
    cout<<str;
    return 0;
}
