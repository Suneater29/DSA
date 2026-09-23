#include<bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
    vector<vector<pair<int,int>>>adj(V);
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int wt=edges[i][2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    set<pair<int,int>>st;
    vector<int>dist(V,INT_MAX);
    dist[src]=0;
    st.insert({0,src});
    while(!st.empty()){
        auto it=*(st.begin());
        int distance=it.first;
        int node=it.second;
        st.erase(it);
        if(distance > dist[node]) continue;
        for(auto it:adj[node]){
            int adjnode=it.first;
            int weight=it.second;
            if(distance + weight < dist[adjnode]){
                if(dist[adjnode]!=INT_MAX){
                    st.erase({dist[adjnode],adjnode});
                }
                dist[adjnode]=distance+weight;
                st.insert({dist[adjnode],adjnode});
            }
        }
    } 
    return dist;
}
int main(){
    cout<<"Dijkstra Algorithm using Set";
    return 0;
}