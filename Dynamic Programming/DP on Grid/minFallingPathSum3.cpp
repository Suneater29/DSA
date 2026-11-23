#include<bits/stdc++.h>
using namespace std;

// we have to reach the last cell i.e. : (n-1)(m-1) but we can move in all the 4 directions 
// in this problem we cannot use dp as we can fall into an infinite loop as graph can be cyclic 
// so we will just simply use Dijkstra's Algorithm

int path(vector<vector<int>> &arr,int n,vector<vector<int>> &dist){
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    dist[0][0]=arr[0][0];
    pq.push({arr[0][0],{0,0}});
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int cost=it.first;
        int row=it.second.first;
        int col=it.second.second;
        if(row==n-1 && col==n-1) return cost;
        if(cost>dist[row][col]) continue;
        for(int i=0;i<4;i++){
            int newr=row+dr[i];
            int newc=col+dc[i];
            if(newr>=0 && newr<n && newc>=0 && newc<n && dist[newr][newr]!=-1){
                int newcost=cost+arr[newr][newc];
                if(newcost<dist[newr][newc]){
                    dist[newr][newc]=newcost;
                    pq.push({newcost,{newr,newc}});
                }
            }
        }
    }
    return dist[n-1][n-1];
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
    int ans=path(arr,n,dist);
    cout<<ans;
    return 0;
}