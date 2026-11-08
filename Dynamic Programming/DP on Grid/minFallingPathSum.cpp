#include<bits/stdc++.h>
using namespace std;

//Recursive 
// int path(int row,int col,vector<vector<int>> &arr,int n){
//     if(col<0 || col>=n) return INT_MAX;
//     if(row==n-1) return arr[row][col];
//     int left=path(row+1,col-1,arr,n);
//     int right=path(row+1,col+1,arr,n);
//     int down=path(row+1,col,arr,n);
//     int mini=min(left,min(right,down));
//     return mini+arr[row][col];
// }

//Memoization
int path(int row,int col,vector<vector<int>> &matrix,int n,vector<vector<int>> &dp){
    if(col<0 || col>=n) return INT_MAX;
    if(row==n-1) return matrix[row][col];
    if(dp[row][col]!=INT_MAX) return dp[row][col];
    int left=path(row+1,col-1,matrix,n,dp);
    int right=path(row+1,col+1,matrix,n,dp);
    int down=path(row+1,col,matrix,n,dp);
    int mini=min(left,min(right,down));
    return dp[row][col]=matrix[row][col]+mini;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int minpath=path(0,i,arr,n,dp);
        ans=min(ans,minpath);
    }
    cout<<ans;
    return 0;
}