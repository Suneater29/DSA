#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    vector<vector<pair<int, int>>> adj(n + 1);
    for (auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, 1e9);
    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty()) {
        int distance=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        if (distance > dist[node]) continue;
        for (auto& neighbor : adj[node]) {
            int adjNode = neighbor.first;
            int weight = neighbor.second;
            if (distance + weight < dist[adjNode]) {
                dist[adjNode] = distance + weight;
                parent[adjNode] = node; 
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    if (dist[n] == 1e9) {
        return {-1};
    }
    vector<int> pathNodes;
    int curr = n;
    while (parent[curr] != curr) {
        pathNodes.push_back(curr);
        curr = parent[curr];
    }
    pathNodes.push_back(1); 
    reverse(pathNodes.begin(), pathNodes.end());
    vector<int> result;
    result.push_back(dist[n]);
    result.insert(result.end(), pathNodes.begin(), pathNodes.end());
    return result;
}
int main(){
    cout<<"print the shortest path in a weighted undirected graph with source 1 and destination vertex n";
    return 0;
}