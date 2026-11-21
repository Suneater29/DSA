#include<bits/stdc++.h>
using namespace std;


// we have to reach the last cell i.e. : (n-1)(m-1)


// Recursive 
// int path(int row,int col,vector<vector<int>> &arr,int n,int m){
//     if(col<0 || col>=n) return INT_MAX;
//     if(row==n-1 && col==m-1) return arr[row][col];
//     int right=path(row,col+1,arr,n,m);
//     int down=path(row+1,col,arr,n,m);
//     int mini=min(right,down);
//     return mini+arr[row][col];
// }

//Memoization
int path(int row,int col,vector<vector<int>> &grid,int n,int m,vector<vector<int>> &dp){
    if(row>=n || col>=m) return INT_MAX;
    if(row==n-1 && col==m-1) return grid[row][col];
    if(dp[row][col]!=-1) return dp[row][col];
    int down=path(row+1,col,grid,n,m,dp);
    int right=path(row,col+1,grid,n,m,dp);
    int mini=min(down,right);
    return dp[row][col]=mini+grid[row][col];
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
    // int ans=INT_MAX;
    // for(int i=0;i<n;i++){
    //     // int minpath=path(0,i,arr,n,dp);
    //     int minpath=path(0,i,arr,n,m);
    //     ans=min(ans,minpath);
    // }
    int ans=path(0,0,arr,n,m,dp);
    cout<<ans;
    return 0;
}