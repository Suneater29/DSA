#include<bits/stdc++.h>
using namespace std;

//Memoization
// int func(int n,vector<int> &dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=func(n-1,dp)+func(n-2,dp);
// }

//Tabulation
int func(int n,vector<int> &dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){ 
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

// Space Optimization
// int main(){
//     int n;
//     cin>>n;
//     int p1=1;
//     int p2=0;
//     for(int i=2;i<=n;i++){
//         int curr=p1+p2;
//         p2=p1;
//         p1=curr;
//     }
//     cout<<p1;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    vector<int>ans;
    for(int i=0;i<=n;i++){
        ans.push_back(func(i,dp));
    }
    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}