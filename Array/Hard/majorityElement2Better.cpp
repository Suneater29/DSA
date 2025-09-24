#include<bits/stdc++.h>
using namespace std;
vector<int>majority(vector<int>&arr,int n){
    unordered_map<int,int>hash;
    vector<int>lst;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
        if(hash[arr[i]]==(n/3)+1){
            lst.push_back(arr[i]);
        }
    }
    return lst;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=majority(arr,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}