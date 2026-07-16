#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &arr, int n)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(auto i:arr){
        if(ans.empty() || ans.back()[1]<i[0]){
            ans.push_back(i);
        }
        else{
            ans.back()[1]=max(ans.back()[1],i[1]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> result = mergeIntervals(arr, n);
    for (auto &it : result)
    {
        for(auto &num:it){
            cout<<num<<" ";
        }
    }
    return 0;
}