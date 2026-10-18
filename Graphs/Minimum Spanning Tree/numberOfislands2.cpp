#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>parent;
    vector<int>rank;
    vector<int>size;
public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;    
            size[i]=1;
        }
    }

    int findUPar(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUPar(parent[node]);
    }

    void unionByRank(int u,int v){
        int pu=findUPar(u);
        int pv=findUPar(v);
        if(pu==pv) return;
        if(rank[pu]<rank[pv]){
            parent[pu]=pv;
            rank[pv]+=rank[pu];
        }
        else{
            parent[pv]=pu;
            rank[pu]+=rank[pv];
        }
    }

    void unionBySize(int u,int v){
        int pu=findUPar(u);
        int pv=findUPar(v);
        if(pu==pv) return;
        if(size[pu] < size[pv]){
            parent[pu]=pv;
        }
        else if(size[pv] < size[pu]){
            parent[pv]=pu;
        }
        else{
            parent[pv]=pu;
            size[pu]++;
        }
    }
};
vector<int> numberOfIslandII(int n, int m, vector<vector<int>>& queries, int q){
    DisjointSet ds(n*m);
    vector<vector<int>>vis(n,vector<int>(m,0));
    int cnt=0;
    vector<int>ans;
    for(auto it:queries){
        int row=it[0];
        int col=it[1];
        if(vis[row][col]==1){
            ans.push_back(cnt);
            continue;
        }
        vis[row][col]=1;
        cnt++;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int newr=row+delrow[i];
            int newc=col+delcol[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m){
                if(vis[newr][newc]==1){ 
                    int nodeNum=row*m+col;
                    int adjnodeNum=newr*m+newc;
                    if(ds.findUPar(nodeNum)!=ds.findUPar(adjnodeNum)){
                        cnt--;
                        ds.unionBySize(nodeNum,adjnodeNum);
                    }
                }
            }
        }
        ans.push_back(cnt);
    }
    return ans;
}
int main(){
    cout<<"number of islands 2 using disjoint set data structure";
    return 0;
}