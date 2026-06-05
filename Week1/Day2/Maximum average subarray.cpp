#include<bits/stdc++.h>
using namespace std;
double maxavgsubarray(vector<int>&nums,int k){
    int n=nums.size();
    long long firstsum=0;
    for(int i=0;i<k;i++){
        firstsum=firstsum+nums[i];
    }
    long long maxavgsum=firstsum;
    for(int i=k;i<n;i++){
        firstsum=firstsum+nums[i]-nums[i-k];
        maxavgsum=max(maxavgsum,firstsum);
    }
    return (double)maxavgsum/k;
}
int main(){
    vector<int>arr={1,12,-5,-6,50,3};
    int k=4;
    cout<<maxavgsubarray(arr,k);

}
