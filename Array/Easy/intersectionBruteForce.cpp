#include<bits/stdc++.h>
using namespace std;
vector<int>intersection(vector<int>&a,vector<int>&b,int n,int m){
    vector<int>ans;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]){
            break;
        }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>result = intersection(a,b,n,m);
    for(auto val:result){
        cout<<val<<" ";
    }
    return 0;
}