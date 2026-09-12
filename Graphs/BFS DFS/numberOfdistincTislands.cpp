#include<bits/stdc++.h>
using namespace std;
void dfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>> &grid,vector<pair<int,int>> &arr,int row0,int col0){
    vis[r][c]=1;
    int m=grid.size();
    int n=grid[0].size();
    arr.push_back({r-row0,c-col0});
    int delrow[]={-1,0,1,0};
    int delcol[]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int newr=r+delrow[i];
        int newc=c+delcol[i];
        if(newr>=0 && newr<m &&
            newc>=0 && newc<n &&
            !vis[newr][newc] &&
            grid[newr][newc]=='L'){
                dfs(newr,newc,vis,grid,arr,row0,col0);
        }
    }
}
int countDistinctIslands(vector<vector<char>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>>vis(m,vector<int>(n,0));
    set<vector<pair<int,int>>>st;
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            if(!vis[r][c] && grid[r][c]=='L'){
                vector<pair<int,int>>arr;
                dfs(r,c,vis,grid,arr,r,c);
                st.insert(arr);
            }
        }
    }
    return st.size(); 
}
int main(){
    cout<<"number of distinct islands";
    return 0;
}