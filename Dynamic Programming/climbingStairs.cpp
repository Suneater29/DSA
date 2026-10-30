#include<bits/stdc++.h>
using namespace std;

//Memoization
// int func(int n,vector<int> &dp){
//     if(n<=1) return 1;
//     if(dp[n]!=-1) return dp[n];
//     int onestep=func(n-1,dp);
//     int twostep=func(n-2,dp);
//     return dp[n]=onestep+twostep;
// }


//Tabulation
// int func(int n,vector<int> &dp){
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

//Space Optimization
int func(int n){
    int one=1;
    int two=1;
    if(n<=1) return 1;
    for(int i=2;i<=n;i++){
        int currPos=one+two;
        two=one;
        one=currPos;
    }
    return one;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    // cout<<func(n,dp);
    cout<<func(n);
    return 0;
}