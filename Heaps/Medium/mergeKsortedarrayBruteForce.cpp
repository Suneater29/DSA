#include<bits/stdc++.h>
using namespace std;
vector<int>ksorted(vector<vector<int>>mat,int n,int m){
    vector<int>merged;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            merged.push_back(mat[i][j]);
        }
    }
    sort(merged.begin(),merged.end());
    return merged;
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