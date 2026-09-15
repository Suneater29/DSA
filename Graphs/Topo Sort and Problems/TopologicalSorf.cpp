#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<vector<int>> &adj,vector<int> &vis,stack<int> &st){
    vis[start]=1;
    for(auto it:adj[start]){
        if(!vis[it]){
            dfs(it,adj,vis,st);
        }
    }
    st.push(start);
}

vector<int> topoSort(int V, vector<vector<int>>& edges) {
    vector<vector<int>>adj(V);
    for(auto &it:edges){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
    }
    vector<int>vis(V,0);
    stack<int>st;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,adj,vis,st);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main(){
    cout<<"Topological Sort using DFS";
    return 0;
}