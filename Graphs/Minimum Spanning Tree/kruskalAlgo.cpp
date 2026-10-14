#include<bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv)
            return;
        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } 
        else if(rank[pv]<rank[pu]){
            parent[pv]=pu;
        }
        else{
            parent[pv] = pu;
            rank[pu] ++;
        }
    }

    void unionBySize(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv)
            return;
        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv]+=size[pu];
        } else {
            parent[pv] = pu;
            size[pu]+=size[pv];
        }
    }
};
int kruskalMST(int n, vector<vector<int>> &edges){
	vector<vector<pair<int,int>>>adj(n+1);
    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        int wt=it[2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    vector<pair<int,pair<int,int>>>adjlist;
    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            int adjnode=it.first;
            int adjwt=it.second;
            int node=i;
            adjlist.push_back({adjwt,{node,adjnode}});
        }
    }
    DisjointSet ds(n);
    sort(adjlist.begin(),adjlist.end());
    int mst=0;
    for(auto it:adjlist){
        int wt=it.first;
        int u=it.second.first;
        int v=it.second.second;
        if(ds.findUPar(u)!=ds.findUPar(v)){
            mst+=wt;
            ds.unionBySize(u,v);
        }
    }
    return mst;
}
int main(){
    cout<<"Kruskal Algorithm";
    return 0;
}