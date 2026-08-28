#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    return 0;
}