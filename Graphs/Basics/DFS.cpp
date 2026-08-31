#include<bits/stdc++.h>
using namespace std;
void traversedfs(int node,vector<vector<int>> &adj,int visited[],vector<int> &ans){
    visited[node]=1;
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!visited[it]){
            traversedfs(it,adj,visited,ans);
        }
    }
}
vector<int> dfs(vector<vector<int>>& adj) {
    int n=adj.size();
    int visited[n]={0};
    int start=0;
    vector<int>ans;
    traversedfs(start,adj,visited,ans);
    return ans;
}
int main(){
    cout<<"DFS traversal";
    return 0;
}