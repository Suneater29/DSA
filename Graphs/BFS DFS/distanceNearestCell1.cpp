#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nearest(vector<vector<int>> &mat,int n,int m) {
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>ans(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
            else{
                vis[i][j]=0;
            }
        }
    }
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        int dist=q.front().second;
        q.pop();
        ans[row][col]=dist;
        for(int i=0;i<4;i++){
            int nearRow=row+delrow[i];
            int nearCol=col+delcol[i];
            if(nearRow>=0 && nearRow<n && nearCol>=0 && nearCol<m && vis[nearRow][nearCol]==0){
                vis[nearRow][nearCol]=1;
                q.push({{nearRow,nearCol},dist+1});
            } 
        }
    }
    return ans;
}
int main(){
    cout<<"distance of nearest cell having 1";
    return 0;
}