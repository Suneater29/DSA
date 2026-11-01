#include<bits/stdc++.h>
using namespace std;

//Recursive
// int jump(int n,vector<int> &heights){
//     if(n==0) return 0;
//     int one=jump(n-1,heights)+abs(heights[n]-heights[n-1]);
//     int two=INT_MAX;
//     if(n>1) two=jump(n-2,heights)+abs(heights[n]-heights[n-2]);
//     return min(one,two);
// }

//Memoization
// int jump(int n,vector<int> &heights,vector<int> &dp){
//     if(n==0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     int one=jump(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
//     int two=INT_MAX;
//     if(n>1) two=jump(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
//     return dp[n]=min(one,two);
// }

//Tabulation
// int jump(int n,vector<int> &heights,vector<int> &dp){
//     dp[0]=0;
//     for(int i=1;i<n;i++){
//         int one=dp[i-1]+abs(heights[i]-heights[i-1]);
//         int two=INT_MAX;
//         if(i>1) two=dp[i-2]+abs(heights[i]-heights[i-2]);
//         dp[i]=min(one,two);
//     }
//     return dp[n-1];
// }

//Space Optimization
int jump(int n,vector<int> &heights){
    int prev1=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int one=prev1+abs(heights[i]-heights[i-1]);
        int two=INT_MAX;
        if(i>1) two=prev2+abs(heights[i]-heights[i-2]);
        int curr=min(one,two);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}

int main(){
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    vector<int>dp(n+1,-1);
    // int ans=jump(n-1,heights,dp);
    int ans=jump(n-1,heights);
    cout<<ans;
    return 0;
}