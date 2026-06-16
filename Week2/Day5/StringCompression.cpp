#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int j=0;
        while(i<n){
            char curr=chars[i];
            int count=0;
            while(i<n && chars[i]==curr){
                i++;
                count++;
            }
            chars[j]=curr;
            j++;
            if(count>1){
                string s=to_string(count);
                for(auto x:s){
                    chars[j]=x;
                    j++;
                }
            }
        }
            return j;         
 }
 int main(){
    vector<char>ch={'a','a','b','b','c','c'};
    int a=compress(ch);
    cout<<a;
    return 0;
 }
