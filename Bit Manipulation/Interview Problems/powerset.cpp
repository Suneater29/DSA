#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>powerset(vector<int> &arr,int n){
    int powsize=1<<n;
    vector<vector<int>>powset;
    for(int i=0;i<powsize;i++){
        vector<int>subset;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                subset.push_back(arr[j]);
            }
        }
        powset.push_back(subset);
    }
    return powset;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans=powerset(arr,n);
    for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}