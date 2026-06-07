#include<bits/stdc++.h>
using namespace std;
int matrixdiagonalsum(vector<vector<int>>&nums){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+nums[i][i];
        sum=sum+nums[i][n-i-1];
    }
    if(n%2!=0){
        sum=sum-nums[n/2][n/2];
        return sum;
    }
    return sum;    
}
int main(){
    vector<vector<int>>arr={{1,2,3},
              {4,5,6},
              {7,8,9}};
    int sum=matrixdiagonalsum(arr);
    cout<<sum;
    return 0;
}
