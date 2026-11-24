#include<bits/stdc++.h>
using namespace std;

//we can buy and sell stock k number of times so we get the maximum profit


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(k+1, 0)));
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                for (int cap = 1; cap <= k; cap++) {
                    if (buy) {
                        dp[ind][buy][cap] = max(-arr[ind] + dp[ind + 1][0][cap],dp[ind + 1][1][cap]);
                    } else {
                        dp[ind][buy][cap] =max(arr[ind] + dp[ind + 1][1][cap - 1],dp[ind + 1][0][cap]);
                    }
                }
            }
        }
        cout<<dp[0][1][k];
    return 0;
}
