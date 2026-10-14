#include<bits/stdc++.h>
using namespace std;
int spanningTree(int V, vector<vector<int>>& edges) {
    vector<vector<pair<int,int>>>adj(V);
    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        int wt=it[2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    int sum=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>vis(V,0);        
    pq.push({0,0});
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int node=it.second;
        int wt=it.first;
        if(vis[node]!=0) continue;
        vis[node]=1;
        sum+=wt;
        for(auto it:adj[node]){
            int adjnode=it.first;
            int adjwt=it.second;
            if(!vis[adjnode]){
                pq.push({adjwt,adjnode});
            }
        }
    }
    return sum;
}
int main(){
    cout<<"Weight of Minimum Spanning Tree";
    return 0;
}