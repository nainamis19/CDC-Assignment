#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=strs[0].size();
        for(int i=0;i<n;i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || strs[j][i]!=ch){
                    return s;
                } 
             }
                 s+=ch;
        }
        return s;     
}
int main(){
    vector<string> s={"flower","flow","flight"};
    string str1=longestCommonPrefix(s);
    cout<<str1;
    return 0;


}
