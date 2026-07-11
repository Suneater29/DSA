#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mergeintervals(vector<vector<int>> &intervals){
sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(auto i:intervals){
        if(ans.empty() || ans.back()[1]< i[0]){
            ans.push_back(i);
        }
        else{
            ans.back()[1]=max(ans.back()[1],i[1]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    vector<vector<int>>answer=mergeintervals(arr);
    for(auto i:answer){
        cout<<"["<<i[0]<<","<<i[1]<<"]";
    }
    cout<<endl;
    return 0;
}