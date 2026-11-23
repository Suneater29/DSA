#include <bits/stdc++.h>
using namespace std;

// Recursion
//  int path(int i,int j1,int j2,vector<vector<int>> &grid,int n,int m){
//      if(j1<0 || j1>=m || j2<0 || j2>=m) return INT_MIN;
//      if(i==n-1){
//          if(j1==j2) return grid[i][j1];
//          else return grid[i][j1]+grid[i][j2];
//      }
//      int dj1[]={-1,0,1};
//      int dj2[]={-1,0,1};
//      int maxi=INT_MIN;
//      for(int row=0;row<3;row++){
//          for(int col=0;col<3;col++){
//              if(j1==j2){
//                  maxi=max(maxi,grid[i][j1]+path(i+1,j1+dj1[row],j2+dj2[col],grid,n,m));
//              }
//              else{
//                  maxi=max(maxi,grid[i][j1]+grid[i][j2]+path(i+1,j1+dj1[row],j2+dj2[col],grid,n,m));
//              }
//          }
//      }
//      return maxi;
//  }

// Memoization
//  int path(int i,int j1,int j2,vector<vector<int>> &grid,int n,int m,vector<vector<vector<int>>> &dp){
//      if(j1<0 || j1>=m || j2<0 || j2>=m) return INT_MIN;
//      if(i==n-1){
//          if(j1==j2) return grid[i][j1];
//          else return grid[i][j1]+grid[i][j2];
//      }
//      if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
//      int dj1[]={-1,0,1};
//      int dj2[]={-1,0,1};
//      int maxi=INT_MIN;
//      for(int row=0;row<3;row++){
//          for(int col=0;col<3;col++){
//              if(j1==j2){
//                  maxi=max(maxi,grid[i][j1]+path(i+1,j1+dj1[row],j2+dj2[col],grid,n,m,dp));
//              }
//              else{
//                  maxi=max(maxi,grid[i][j1]+grid[i][j2]+path(i+1,j1+dj1[row],j2+dj2[col],grid,n,m,dp));
//              }
//          }
//      }
//      return dp[i][j1][j2]=maxi;
//  }
//  int main(){
//      int n;
//      cin>>n;
//      int m;
//      cin>>m;
//      vector<vector<int>>grid(n,vector<int>(m));
//      for(int i=0;i<n;i++){
//          for(int j=0;j<m;j++){
//              cin>>grid[i][j];
//          }
//      }
//      vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
//      int ans=path(0,0,m-1,grid,n,m,dp);
//      cout<<ans;
//      return 0;
//  }

// Tabulation
// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;
//     vector<vector<int>> grid(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
//     vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
//     for (int j1 = 0; j1 < m; j1++)
//     {
//         for (int j2 = 0; j2 < m; j2++)
//         {
//             if (j1 == j2)
//                 dp[n - 1][j1][j2] = grid[n - 1][j1];
//             else
//                 dp[n - 1][j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
//         }
//     }
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j1 = 0; j1 < m; j1++)
//         {
//             for (int j2 = 0; j2 < m; j2++)
//             {
//                 int maxi = INT_MIN;
//                 for (int dj1 = -1; dj1 <= 1; dj1++)
//                 {
//                     for (int dj2 = -1; dj2 <= 1; dj2++)
//                     {
//                         if (j1 + dj1 < 0 || j1 + dj1 >= m || j2 + dj2 < 0 || j2 + dj2 >= m)
//                             continue;
//                         if (j1 == j2)
//                         {
//                             maxi = max(maxi, grid[i][j1] + dp[i + 1][j1 + dj1][j2 + dj2]);
//                         }
//                         else
//                         {
//                             maxi = max(maxi, grid[i][j1] + grid[i][j2] + dp[i + 1][j1 + dj1][j2 + dj2]);
//                         }
//                     }
//                 }
//                 dp[i][j1][j2] = maxi;
//             }
//         }
//     }
//     cout << dp[0][0][m - 1];
//     return 0;
// }

// Space Optimization
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> front(m, vector<int>(m, 0));
    vector<vector<int>> curr(m, vector<int>(m, 0));
    for (int j1 = 0; j1 < m; j1++)
    {
        for (int j2 = 0; j2 < m; j2++)
        {
            if (j1 == j2)
                front[j1][j2] = grid[n - 1][j1];
            else
                front[j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j1 = 0; j1 < m; j1++)
        {
            for (int j2 = 0; j2 < m; j2++)
            {
                int maxi = INT_MIN;
                for (int dj1 = -1; dj1 <= 1; dj1++)
                {
                    for (int dj2 = -1; dj2 <= 1; dj2++)
                    {
                        if (j1 + dj1 < 0 || j1 + dj1 >= m || j2 + dj2 < 0 || j2 + dj2 >= m)
                            continue;
                        if (j1 == j2)
                        {
                            maxi = max(maxi, grid[i][j1] + front[j1 + dj1][j2 + dj2]);
                        }
                        else
                        {
                            maxi = max(maxi, grid[i][j1] + grid[i][j2] + front[j1 + dj1][j2 + dj2]);
                        }
                    }
                }
                curr[j1][j2] = maxi;
            }
        }
        front = curr;
    }
    cout << front[0][m - 1];
    return 0;
}