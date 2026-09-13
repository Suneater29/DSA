#include<bits/stdc++.h>
using namespace std;
bool dfs(int start,vector<int> &vis,vector<int> &pathvis,vector<vector<int>> &edges){
    vis[start]=1;
    pathvis[start]=1;
    for(auto it:edges[start]){
        if(!vis[it]){
            if(dfs(it,vis,pathvis,edges)==true) return true;
        }
        else if(pathvis[it]) return true;
    }
    pathvis[start]=0;
    return false;
}
bool isCyclic(int V, vector<vector<int>> &edges) {
    vector<int>vis(V,0);
    vector<int>pathvis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(dfs(i,vis,pathvis,edges)) return true;
        }
    }
    return false;
}
int main(){
    cout<<"cycle detection is a directed graph using DFS";
    return 0;
}