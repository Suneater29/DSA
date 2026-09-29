#include<bits/stdc++.h>
using namespace std;
int shortestPathBinaryMatrix(vector<vector<int>> &matrix, pair<int, int> src, pair<int, int> dest){
    int n=matrix.size();
    int m=matrix[0].size();
    int srcR=src.first;
    int srcC=src.second;
    int destR=dest.first;
    int destC=dest.second;
    if(matrix[srcR][srcC]==0 || matrix[destR][destC]==0) return -1;
    if(src==dest) return 0;
    vector<vector<int>>dist(n,vector<int>(m,-1));
    dist[srcR][srcC]=0;
    queue<pair<int,int>>q;
    q.push(src);
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int newr=row+delrow[i];
            int newc=col+delcol[i];
            if(newr<0 || newr>=n || newc<0 || newc>=m) continue;
            if(matrix[newr][newc]==0 || dist[newr][newc]!=-1) continue;
            dist[newr][newc]=dist[row][col]+1;
            if(newr==destR && newc==destC) return dist[row][col]+1;
            q.push({newr,newc});
        }
    }
    return -1;
}
int main(){
    cout<<"shortest path in a binary maze";
    return 0;
}