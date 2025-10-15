#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>mergeIntervals(vector<pair<int,int>>&arr,int n){
    sort(arr.begin(),arr.end());
    vector<pair<int,int>>res;
    for(int i=0;i<n;i++){
        int start=arr[i].first;
        int end=arr[i].second;
        if(!res.empty() && end<=res.back().second){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j].first<=end){
                end=max(end,arr[j].second);
            }
            else{
                break;
            }
        }
        res.push_back({start,end});
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int x;
        int y;
        cin>>x;
        cin>>y;
        arr.push_back({x,y});
    }
    vector<pair<int,int>>result=mergeIntervals(arr,n);
    for(auto &it : result){
        cout<<it.first<<","<<it.second<<endl;
    }
    return 0;
}