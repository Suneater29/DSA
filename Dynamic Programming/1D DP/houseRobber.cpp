#include<bits/stdc++.h>
using namespace std;

//Recursive
// int rob(vector<int> &nums,int n){
//     if(n<0) return 0;
//     if(n==0) return nums[0];
//     int take=nums[n]+rob(nums,n-2);
//     int leave=rob(nums,n-1);
//     return max(take,leave);
// }

//Memoization
// int rob(vector<int> &nums,int n,vector<int> &dp){
//     if(n<0) return 0;
//     if(n==0) return nums[0];
//     if(dp[n]!=-1) return dp[n];
//     int take=nums[n]+rob(nums,n-2,dp);
//     int leave=rob(nums,n-1,dp);
//     return dp[n]=max(take,leave);
// }

//Tabulation
// int rob(vector<int> &nums,int n,vector<int> &dp){
//     dp[0]=nums[0];
//     if(n==1) return dp[0];
//     dp[1]=max(nums[0],nums[1]);
//     for(int i=2;i<n;i++){
//         int take=nums[i]+dp[i-2];
//         int leave=dp[i-1];
//         dp[i]=max(take,leave);
//     }
//     return dp[n-1];
// }


//Space Optimisation
int rob(vector<int> &nums,int n){
    int prev1=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int take=nums[i]+prev2;
        int leave=prev1;
        int curr=max(take,leave);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>dp(n,-1);
    int ans=rob(nums,n);
    // int ans=rob(nums,n,dp);
    cout<<ans;
    return 0;
}