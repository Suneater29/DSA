#include<bits/stdc++.h>
using namespace std;
vector<int>leader(vector<int>&arr,int n){
    vector<int>res;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            res.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(res.begin(),res.end());
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=leader(arr,n);
    for(auto it : result){
        cout<<it<<" ";
    }
    return 0;
}