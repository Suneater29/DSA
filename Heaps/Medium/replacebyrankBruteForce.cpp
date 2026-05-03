#include<bits/stdc++.h>
using namespace std;
vector<int>replacebyrank(vector<int> &arr,int n){
    vector<int>res;
    for(int i=0;i<n;i++){
        unordered_set<int>ranked;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]) ranked.insert(arr[j]);
        }
        int rank=ranked.size()+1;
        res.push_back(rank);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=replacebyrank(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}