#include<bits/stdc++.h>
using namespace std;
vector<int>ksorted(vector<vector<int>>mat,int n,int m){
    using T=pair<int,pair<int,int>>;
    priority_queue<T,vector<T>,greater<T>>pq;
    for(int i=0;i<n;i++){
        pq.push({mat[i][0],{i,0}});
    }
    vector<int>ans;
    while(!pq.empty()){
        T temp=pq.top();
        pq.pop();
        int val=temp.first;
        int r=temp.second.first;
        int c=temp.second.second;
        // auto[val,rc]=pq.top();
        // auto[r,c]=rc;
        // pq.pop();
        ans.push_back(val);
        if(c+1<mat[r].size()){
            pq.push({mat[r][c+1],{r,c+1}});
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    vector<int>ans=ksorted(mat,n,m);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}