#include<bits/stdc++.h>
using namespace std;

//Recursive
// int path(int row,int col,vector<vector<int>> &arr){
//     if(row<0 || col<0) return 0;
//     if(arr[row][col]==1) return 0;
//     if(row==0 && col==0) return 1;
//     int upPath=path(row-1,col,arr);
//     int leftPath=path(row,col-1,arr);
//     return upPath+leftPath;
// }

//Memoization
// int path(int row,int col,vector<vector<int>> &arr,vector<vector<int>> &dp){
//     if(row<0 || col<0) return 0;
//     if(arr[row][col]==1) return 0;
//     if(row==0 && col==0) return 1;
//     if(dp[row][col]!=1) return dp[row][col];
//     int upPath=path(row-1,col,arr,dp);
//     int leftPath=path(row,col-1,arr,dp);
//     return dp[row][col]= upPath+leftPath;
// }


//Tabulation
int path(int m,int n,vector<vector<int>> &arr,vector<vector<int>> &dp){
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            if(arr[row][col]==1){
                dp[row][col]=0;
                continue;
            }
            if(row==0 && col==0){
                dp[row][col]=1;
                continue;
            }
            int upPath=0;
            int leftPath=0;
            if(row>0) upPath=dp[row-1][col];
            if(col>0) leftPath=dp[row][col-1];
            dp[row][col]=upPath+leftPath;
        }
    }
    return dp[m-1][n-1];
}


//Space Optimization
// int path(int m,int n){
//     vector<int>prev(n,0);
//     for(int row=0;row<m;row++){
//         vector<int>curr(n,0);
//         for(int col=0;col<n;col++){
//             if(row==0 && col==0){
//                 curr[col]=1;
//                 continue;
//             } 
//             int upPath=0;
//             int leftPath=0;
//             if(row>0) upPath=prev[col];
//             if(col>0) leftPath=curr[col-1];
//             curr[col]=upPath+leftPath;
//         }
//         prev=curr;
//     }
//     return prev[n-1];
// }


int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>dp(m,vector<int>(n,0));
    int ans=path(m,n,arr,dp);
    // int ans=path(m,n);
    cout<<ans;
    return 0;
}