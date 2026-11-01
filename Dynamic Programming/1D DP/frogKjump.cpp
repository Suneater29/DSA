#include<bits/stdc++.h>
using namespace std;

//Recursive
// int func(int n,vector<int> &arr,int k){
//     if(n==0) return 0;
//     int minEnergy=INT_MAX;
//     for(int i=1;i<=k;i++){
//         if(n-i>=0){
//             int jump=func(n-i,arr,k)+abs(arr[n]-arr[n-i]);
//             minEnergy=min(minEnergy,jump);
//         }
//     }
//     return minEnergy;
// }

//Memoization
// int func(int n,vector<int> &arr,int k,vector<int> &dp){
//     if(n==0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     int minEnergy=INT_MAX;
//     for(int i=1;i<=k;i++){
//         if(n-i>=0){
//             int jump=func(n-i,arr,k,dp)+abs(arr[n]-arr[n-i]);
//             minEnergy=min(minEnergy,jump);
//         }
//     }
//     return dp[n]=minEnergy;
// }

//Tabulation
int func(int n,vector<int> &arr,int k,vector<int> &dp){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int minEnergy=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
                minEnergy=min(minEnergy,jump);
            }
        }
        dp[i]=minEnergy;
    }
    return dp[n-1];
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>dp(n,-1);
    int ans=func(n,arr,k,dp);
    cout<<ans;
    return 0;
}