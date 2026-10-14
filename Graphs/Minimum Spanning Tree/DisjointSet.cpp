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
int main(){
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);

    //if 3 and 7 are from the same component or not
    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }

    ds.unionBySize(3,7);

    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}