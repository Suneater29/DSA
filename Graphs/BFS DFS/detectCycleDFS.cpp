#include<bits/stdc++.h>
using namespace std;
bool dfs(int parent,int src,vector<int> adj[],int vis[]){
    vis[parent]=1;
    for(auto neighbor:adj[parent]){
        if(!vis[neighbor]){
            if(dfs(neighbor,parent,adj,vis)) return true;
        }
        else if(neighbor!=src) return true;
    }
    return false;
}
bool detectCycle(int V, vector<int> adj[]) {
    int vis[V]={0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(dfs(i,-1,adj,vis)) return true;
        }
    }
    return false;
}
int main(){
    cout<<"detect cycle in undirected graph using DFS algorithm";
    return 0;
}