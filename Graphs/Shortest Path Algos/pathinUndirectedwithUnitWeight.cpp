#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath(int n, vector<vector<int>>&edges, int src) {
    vector<vector<int>>adj(n);
    for(auto &it:edges){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>dist(n,-1);
    dist[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dist[it]==-1){
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        if(dist[i]!=-1){
            ans[i]=dist[i];
        }
    }
    return dist;
}
int main(){
    cout<<"Shortest path in an undirected graph with unit weight";
    return 0;
}