#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>insertintervals(vector<vector<int>> &intervals,int n,vector<int> &newInterval){
    vector<vector<int>>ans;
    int curr=0;
    while(curr<n && intervals[curr][1]<newInterval[0]){
        ans.push_back(intervals[curr]);
        curr++;
    }
    while(curr<n && intervals[curr][0]<=newInterval[1]){
        newInterval[0]=min(intervals[curr][0],newInterval[0]);
        newInterval[1]=max(intervals[curr][1],newInterval[1]);
        curr++;
    }
    ans.push_back(newInterval);
    while(curr<n){
        ans.push_back(intervals[curr]);
            curr++;
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
    vector<int>newinterval(2);
    cin>>newinterval[0];
    cin>>newinterval[1];
    vector<vector<int>>answer=insertintervals(arr,n,newinterval);
    for(auto i:answer){
        cout<<"["<<i[0]<<","<<i[1]<<"]";
    }
    cout<<endl;
    return 0;
}