#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=majority(arr,n);
    cout<<res;
    return 0;
}