#include<bits/stdc++.h>
using namespace std;
vector<int>intersection(vector<int>&a,vector<int>&b,int n,int m){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
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
    vector<int>result=intersection(a,b,n,m);
    for(auto val:result){
        cout<<val<<" ";
    }
    return 0;
}