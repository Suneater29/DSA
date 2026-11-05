#include <bits/stdc++.h>
using namespace std;

// Recursive
//  int func(int day,int last,vector<vector<int>> &arr){
//      if(day==0){
//          int ans=0;
//          for(int i=0;i<3;i++){
//              if(i!=last) ans=max(ans,arr[0][i]);
//          }
//          return ans;
//      }
//      int ans=0;
//      for(int i=0;i<3;i++){
//          if(i!=last){
//              int point=arr[day][i]+func(day-1,i,arr);
//              ans=max(ans,point);
//          }
//      }
//      return ans;
//  }

// Memoization
//  int func(int day,int last,vector<vector<int>> &arr,vector<vector<int>> &dp){
//      if(day==0){
//          int ans=0;
//          for(int i=0;i<3;i++){
//              if(i!=last) ans=max(ans,arr[0][i]);
//          }
//          return ans;
//      }
//      if(dp[day][last]!=-1) return dp[day][last];
//      int ans=0;
//      for(int i=0;i<3;i++){
//          if(i!=last){
//              int point=arr[day][i]+func(day-1,i,arr,dp);
//              ans=max(ans,point);
//          }
//      }
//      return ans;
//  }

// Tabulation
// int func(int day, int last, vector<vector<int>> &arr, vector<vector<int>> &dp)
// {
//     int n = arr.size();
//     dp[0][0] = max(arr[0][1], arr[0][2]);
//     dp[0][1] = max(arr[0][0], arr[0][2]);
//     dp[0][2] = max(arr[0][0], arr[0][1]);
//     dp[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));
//     for (int day = 1; day < n; day++)
//     {
//         for (int last = 0; last < 4; last++)
//         {
//             dp[day][last] = 0;
//             for (int task = 0; task < 3; task++)
//             {
//                 if (task != last)
//                 {
//                     int points = arr[day][task] + dp[day - 1][task];
//                     dp[day][last] = max(dp[day][last], points);
//                 }
//             }
//         }
//     }
//     return dp[n - 1][3];
// }

//Space Optimization
int func(vector<vector<int>> &arr){
    int n=arr.size();
    vector<int>prev(4,0);
    prev[0]=max(arr[0][1],arr[0][2]);
    prev[1]=max(arr[0][0],arr[0][2]);
    prev[2]=max(arr[0][0],arr[0][1]);
    prev[3]=max(arr[0][0],max(arr[0][1],arr[0][2]));
    for(int day=1;day<n;day++){
        vector<int>temp(4,0);
        for(int last=0;last<4;last++){
            temp[last]=0;
            for(int task=0;task<3;task++){
                if(task!=last){
                    temp[last]=max(temp[last],arr[day][task]+prev[task]);
                }
            }
        }
        prev=temp;
    }
    return prev[3];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(4, -1));
    int ans = func(arr);
    // int ans = func(n - 1, 3, arr, dp);
    cout << ans;
    return 0;
}