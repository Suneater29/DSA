#include<bits/stdc++.h>
using namespace std;
bool detect(int node,vector<int> adj[],int vis[]){
    vis[node]=1;
    queue<pair<int,int>>q;
    q.push({node,-1});
    while(!q.empty()){
        int parent=q.front().first;
        int src=q.front().second;
        q.pop();
        for(auto neighbor:adj[parent]){
            if(!vis[neighbor]){
                vis[neighbor]=1;
                q.push({neighbor,parent});
            }
            else if(src!=neighbor) return true;
        }
    }
    return false;
}
bool detectCycle(int V, vector<int> adj[]) {
    int vis[V]={0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)) return true;
        }
    }
    return false;
}
int main(){
    cout<<"detect cycle in undirected graph using BFS algorithm";
    return 0;
}