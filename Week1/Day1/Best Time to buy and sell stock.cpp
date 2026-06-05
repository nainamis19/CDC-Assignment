#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>&prices){
    int n=prices.size();
    int mini=prices[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int precost=prices[i]-mini;
        profit=max(profit,precost);
        mini=min(mini,prices[i]);
    }
    return profit;
}
int main(){
    vector<int> nums={7,6,4,3,1};
    int ans=maxprofit(nums);
    cout<<ans;
}
