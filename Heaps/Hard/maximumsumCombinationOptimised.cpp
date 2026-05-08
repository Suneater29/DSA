#include<bits/stdc++.h>
using namespace std;
vector<int>maxsum(vector<int> &a,int n,vector<int> &b,int m,int k){
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    priority_queue<tuple<int,int,int>>pq;
    set<pair<int,int>>visited;
    pq.push({a[0]+b[0],0,0});
    visited.insert({0,0});
    vector<int>ans;
    while(k-- && !pq.empty()){
        // auto [sum,i,j]=pq.top();
        tuple<int,int,int> temp=pq.top();
        int sum=get<0>(temp);
        int i=get<1>(temp);
        int j=get<2>(temp);
        pq.pop();
        ans.push_back(sum);
        if((i+1)<n && !visited.count({i+1,j})){
            pq.push({a[i+1]+b[j],i+1,j});
            visited.insert({i+1,j});
        }
        if((j+1)<m && !visited.count({i,j+1})){
            pq.push({a[i]+b[j+1],i,j+1});
            visited.insert({i,j+1});
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int k;
    cin>>k;
    vector<int>res=maxsum(arr1,n,arr2,m,k);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}