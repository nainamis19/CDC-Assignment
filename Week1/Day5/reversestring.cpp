#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
        int n=s.size();
        int c=0;
        int e=n-1;
        while(c<e){
            swap(s[c],s[e]);
             c++;
             e--;
        }    
 }
int main(){
    vector<char>s={'h','e','l','l','o'};
    reverseString(s);
    for(char ch:s){
        cout<<ch;
    }
    return 0;
}   
