#include<bits/stdc++.h>
using namespace std;

//we can buy and sell stock only 2 times to get the maximum profit

//Recursive
// int maxProf(int ind,int canbuy,vector<int> &arr,int n,int cap){
//     if(cap==2) return 0;
//     if(ind==n) return 0;
//     if(canbuy){
//         int purchase=-arr[ind]+maxProf(ind+1,0,arr,n,cap);
//         int skip=maxProf(ind+1,1,arr,n,cap);
//         return max(purchase,skip);
//     }
//     else{
//         int sell=arr[ind]+maxProf(ind+1,1,arr,n,cap+1);
//         int hold=maxProf(ind+1,0,arr,n,cap);
//         return max(sell,hold);
//     }
// }

//Memoization
// int maxProf(int ind,int canbuy,vector<int> &arr,int n,int cap,vector<vector<vector<int>>> &dp){
//     if(cap==2) return 0;
//         if(ind==n) return 0;
//         int profit=0;
//         if(dp[ind][canbuy][cap]!=-1) return dp[ind][canbuy][cap];
//         if(canbuy){
//             profit=max(-arr[ind]+maxProf(ind+1,0,arr,n,cap,dp),maxProf(ind+1,1,arr,n,cap,dp));
//         }
//         else{
//             profit=max(arr[ind]+maxProf(ind+1,1,arr,n,cap+1,dp),maxProf(ind+1,0,arr,n,cap,dp));
//         }
//         return dp[ind][canbuy][cap]=profit;
// }



// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // vector<vector<int>>dp(n+1,vector<int>(2,-1));
//     vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
//     // int ans=maxProf(0,1,arr,n,0);
//     int ans=maxProf(0,1,arr,n,0,dp);
//     // int ans=maxProf(arr,n,dp);
//     cout<<ans;
//     return 0;
// }

//Tabulation
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=2;cap++){
                    if(buy){
                        dp[ind][buy][cap]= max(-arr[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);
                    }
                    else{
                        dp[ind][buy][cap]= max(arr[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                    }
                }
            }
        }
        cout<< dp[0][1][2];
    return 0;
}


//space optimisation
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//         int frontNotBuy,frontBuy,currNotBuy,currBuy;
//         frontNotBuy=frontBuy=0;
//         for(int ind=n-1;ind>=0;ind--){
//             int profit=0;
//             currBuy=max(-arr[ind]+frontNotBuy,frontBuy);
//             currNotBuy=max(arr[ind]+frontBuy,frontNotBuy);
//             frontNotBuy=currNotBuy;
//             frontBuy=currBuy;
//         }
//         cout<<frontBuy; 
//         return 0;
// }