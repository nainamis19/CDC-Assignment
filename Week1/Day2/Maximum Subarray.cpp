#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(vector<int>&nums) {
    int n=nums.size();
    int currsum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<n;i++){
        currsum=max(nums[i],currsum+nums[i]);
        maxsum=max(maxsum,currsum);
    }
    return maxsum;  
}
int main(){
    vector<int> arr={5,4,-1,7,8};
    int ans=maxsubarraysum(arr);
    cout<<ans;
}
