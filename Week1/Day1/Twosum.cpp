#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                if(sum==target) return {i,j};
            }
        }
        return {};
}
int main(){
    vector<int> arr={2,7,11,15};
    int target=9;
    vector<int>ans=twoSum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
