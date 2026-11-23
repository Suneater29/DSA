#include<bits/stdc++.h>
using namespace std;


// we have to reach the last row from variable starting point in first row and return the maximum path sum 

//Recursive 
// int path(int row,int col,vector<vector<int>> &arr,int n,int m){
//     if(col<0 || col>=m) return INT_MIN;
//     if(row==n-1) return arr[row][col];
//     int left=path(row+1,col-1,arr,n,m);
//     int right=path(row+1,col+1,arr,n,m);
//     int down=path(row+1,col,arr,n,m);
//     int maxi=max(left,max(right,down));
//     return maxi+arr[row][col];
// }

//Memoization
int path(int row,int col,vector<vector<int>> &matrix,int n,int m,vector<vector<int>> &dp){
    if(col<0 || col>=m) return INT_MIN;
    if(row==n-1) return matrix[row][col];
    if(dp[row][col]!=INT_MAX) return dp[row][col];
    int left=path(row+1,col-1,matrix,n,m,dp);
    int right=path(row+1,col+1,matrix,n,m,dp);
    int down=path(row+1,col,matrix,n,m,dp);
    int maxi=max(left,max(right,down));
    return dp[row][col]=matrix[row][col]+maxi;
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
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        // int minpath=path(0,i,arr,n,m);
        int minpath=path(0,i,arr,n,m,dp);
        ans=max(ans,minpath);
    }
    cout<<ans;
    return 0;
}