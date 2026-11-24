#include<bits/stdc++.h>
using namespace std;

//we can buy and sell stock any number of times we want till we get the maximum profit

//Recursive
// int maxProf(int ind,int canbuy,vector<int> &arr,int n){
//     if(ind==n) return 0;
//     if(canbuy){
//         int purchase=-arr[ind]+maxProf(ind+1,0,arr,n);
//         int skip=maxProf(ind+1,1,arr,n);
//         return max(purchase,skip);
//     }
//     else{
//         int sell=arr[ind]+maxProf(ind+1,1,arr,n);
//         int hold=maxProf(ind+1,0,arr,n);
//         return max(sell,hold);
//     }
// }

//Memoization
// int maxProf(int ind,int canbuy,vector<int> &arr,int n,vector<vector<int>> &dp){
//         if(ind==n) return 0;
//         int profit=0;
//         if(dp[ind][canbuy]!=-1) return dp[ind][canbuy];
//         if(canbuy){
//             profit=max(-arr[ind]+maxProf(ind+1,0,arr,n,dp),maxProf(ind+1,1,arr,n,dp));
//         }
//         else{
//             profit=max(arr[ind]+maxProf(ind+1,1,arr,n,dp),maxProf(ind+1,0,arr,n,dp));
//         }
//         return dp[ind][canbuy]=profit;
// }

// Tabulation
// int maxProf(vector<int> &arr, int n, vector<vector<int>> &dp) {
//     dp[n][0] = dp[n][1] = 0;
//     for (int ind = n - 1; ind >= 0; ind--) {
//         for (int canbuy = 0; canbuy <= 1; canbuy++) {
//             int profit = 0;
//             if (canbuy) {
//                 profit = max(-arr[ind]+dp[ind + 1][0], dp[ind + 1][1]);
//             }
//             else {
//                 profit = max(arr[ind]+dp[ind + 1][1], dp[ind + 1][0]);
//             }
//             dp[ind][canbuy] = profit;
//         }
//     }
//     return dp[0][1];
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<vector<int>>dp(n+1,vector<int>(2,-1));
//     // vector<vector<int>>dp(n,vector<int>(2,-1));
//     // int ans=maxProf(0,1,arr,n);
//     int ans=maxProf(arr,n,dp);
//     // int ans=maxProf(0,1,arr,n,dp);
//     cout<<ans;
//     return 0;
// }


//space optimisation
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int frontNotBuy,frontBuy,currNotBuy,currBuy;
        frontNotBuy=frontBuy=0;
        for(int ind=n-1;ind>=0;ind--){
            int profit=0;
            currBuy=max(-arr[ind]+frontNotBuy,frontBuy);
            currNotBuy=max(arr[ind]+frontBuy,frontNotBuy);
            frontNotBuy=currNotBuy;
            frontBuy=currBuy;
        }
        cout<<frontBuy; 
        return 0;
}