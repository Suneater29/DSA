#include<bits/stdc++.h>
using namespace std;

//we can buy and sell stock but we cannot buy stock just after selling , we have to wait for a day for cooldown

//Recursive
int maxProf(int ind,int canbuy,vector<int> &arr,int n,int fee){
    if(ind>=n) return 0;
    if(canbuy){
        int purchase=-arr[ind]+maxProf(ind+1,0,arr,n,fee);
        int skip=maxProf(ind+1,1,arr,n,fee);
        return max(purchase,skip);
    }
    else{
        int sell=arr[ind]-fee+maxProf(ind+1,1,arr,n,fee);
        int hold=maxProf(ind+1,0,arr,n,fee);
        return max(sell,hold);
    }
}

//Memoization
// int maxProf(int ind,int canbuy,vector<int> &arr,int n,vector<vector<int>> &dp,int fee){
//         if(ind==n) return 0;
//         int profit=0;
//         if(dp[ind][canbuy]!=-1) return dp[ind][canbuy];
//         if(canbuy){
//             profit=max(-arr[ind]+maxProf(ind+1,0,arr,n,dp,fee),maxProf(ind+1,1,arr,n,dp,fee));
//         }
//         else{
//             profit=max(arr[ind]-fee+maxProf(ind+1,1,arr,n,dp,fee),maxProf(ind+1,0,arr,n,dp,fee));
//         }
//         return dp[ind][canbuy]=profit;
// }


// Tabulation
// int maxProf(vector<int> &arr, int n, vector<vector<int>> &dp,int fee) {
//     for (int ind = n - 1; ind >= 0; ind--) {
//         for (int canbuy = 0; canbuy <= 1; canbuy++) {
//             int profit = 0;
//             if (canbuy) {
//                 profit = max(-arr[ind]+dp[ind + 1][0], dp[ind + 1][1]);
//             }
//             else {
//                 profit = max(arr[ind]-fee+dp[ind + 1][1], dp[ind + 1][0]);
//             }
//             dp[ind][canbuy] = profit;
//         }
//     }
//     return dp[0][1];
// }


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fee;
    cin>>fee;
    vector<vector<int>>dp(n,vector<int>(2,-1));
    int ans=maxProf(0,1,arr,n,fee);
    cout<<ans;
    return 0;
}

//Space Optimisation
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int fee;
//     cin>>fee;
//     int frontNotBuy,frontBuy,currNotBuy,currBuy;
//     frontNotBuy=frontBuy=0;
//     for(int ind=n-1;ind>=0;ind--){
//         int profit=0;
//         currBuy=max(-arr[ind]+frontNotBuy,frontBuy);
//         currNotBuy=max(arr[ind]-fee+frontBuy,frontNotBuy);
//         frontNotBuy=currNotBuy;
//         frontBuy=currBuy;
//     }
//     cout<< frontBuy;
//     return 0;
// }
