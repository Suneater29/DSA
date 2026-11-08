#include<bits/stdc++.h>
using namespace std;

//Recursive
// int path(int m,int row,int n,int col){
//     if(row==m-1 && col==n-1) return 1;
//     if(row>=m || col>=n) return 0;
//     int downPath=path(m,row+1,n,col);
//     int rightPath=path(m,row,n,col+1);
//     return downPath+rightPath;
// }

//Memoization
// int path(int m,int row,int n,int col,vector<vector<int>> &dp){
//     if(row==m-1 && col==n-1) return 1;
//     if(row>=m || col>=n) return 0;
//     if(dp[row][col]!=-1) return dp[row][col];
//     int downPath=path(m,row+1,n,col,dp);
//     int rightPath=path(m,row,n,col+1,dp);
//     return dp[row][col]=downPath+rightPath;
// }


//Tabulation
// int path(int m,int row,int n,int col,vector<vector<int>> &dp){
//     if(row==m-1 && col==n-1) return 1;
//     if(row>=m || col>=n) return 0;
//     if(dp[row][col]!=-1) return dp[row][col];
//     int downPath=path(m,row+1,n,col,dp);
//     int rightPath=path(m,row,n,col+1,dp);
//     return dp[row][col]=downPath+rightPath;
// }


//Space Optimization
int path(int m,int n){
    vector<int>prev(n,0);
    for(int row=0;row<m;row++){
        vector<int>curr(n,0);
        for(int col=0;col<n;col++){
            if(row==0 && col==0){
                curr[col]=1;
                continue;
            } 
            int upPath=0;
            int leftPath=0;
            if(row>0) upPath=prev[col];
            if(col>0) leftPath=curr[col-1];
            curr[col]=upPath+leftPath;
        }
        prev=curr;
    }
    return prev[n-1];
}
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    // vector<vector<int>>dp(m,vector<int>(n,-1));
    // int ans=path(m,0,n,0,dp);
    int ans=path(m,n);
    cout<<ans;
    return 0;
}