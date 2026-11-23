#include<bits/stdc++.h>
using namespace std;

//Recurive 
// int path(int row,int col,vector<vector<int>> &triangle,int n){
//     if(row==n-1) return triangle[n-1][col];
//     int down=path(row+1,col,triangle,n);
//     int rightDown=path(row+1,col+1,triangle,n);
//     int mini=min(down,rightDown);
//     return mini+triangle[row][col];
// }


//Memoization
// int path(int row,int col,vector<vector<int>> &triangle,int n,vector<vector<int>> &dp){
//     if(row==n-1) return triangle[n-1][col];
//     if(dp[row][col]!=-1) return dp[row][col];
//     int down=path(row+1,col,triangle,n,dp);
//     int rightDown=path(row+1,col+1,triangle,n,dp);
//     int mini=min(down,rightDown);
//     return mini+triangle[row][col];
// }

//Tabulation
// int path(int row,int col,vector<vector<int>> &triangle,int n,vector<vector<int>> &dp){
//     dp[0][0]=triangle[0][0];
//     for(int i=0;i<n;i++){
//         dp[n-1][i]=triangle[n-1][i];
//     }
//     for(int i=n-2;i>=0;i--){
//         for(int j=i;j>=0;j--){
//             int down=triangle[i][j]+dp[i+1][j];
//             int rightDown=triangle[i][j]+dp[i+1][j+1];
//             dp[i][j]=min(down,rightDown);
//         }
//     }
//     return dp[0][0];
// }


//Space Optimization
int path(vector<vector<int>> &triangle,int n){
    vector<int>front(n);
    for(int i=0;i<n;i++){
        front[i]=triangle[n-1][i];
    }
    for(int i=n-2;i>=0;i--){
        vector<int>curr(i+1);
        for(int j=i;j>=0;j--){
            int down=triangle[i][j]+front[j];
            int rightDown=triangle[i][j]+front[j+1];
            curr[j]=min(down,rightDown);
        }
        front=curr;
    }
    return front[0];
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>triangle(n);
    for(int i=0;i<n;i++){
        triangle[i].resize(i+1);
        for(int j=0;j<=i;j++){
            cin>>triangle[i][j];
        }
    }
    // vector<vector<int>>dp(n,vector<int>(n,-1));
    int ans=path(triangle,n);
    // int ans=path(0,0,triangle,n,dp);
    cout<<ans;
    return 0;
}