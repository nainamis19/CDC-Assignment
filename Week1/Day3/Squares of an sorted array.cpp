#include<bits/stdc++.h>
using namespace std;
vector<int> sortedarray(vector<int>&nums){
    int n=nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a=nums[i];
        ans.push_back(a*a);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>arr={-4,-1,0,3,10};
    vector<int>ans=sortedarray(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}
