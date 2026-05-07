#include<bits/stdc++.h>
using namespace std;
vector<int>topk(vector<int> &arr,int n,int k){
    unordered_map<int,int>mpp;
    for(int i:arr){
        mpp[i]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto i:mpp){
        pq.push({i.second,i.first});
        if(pq.size()>k) pq.pop();
    }
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>res=topk(arr,n,k);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}