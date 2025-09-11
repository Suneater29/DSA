#include<bits/stdc++.h>
using namespace std;
int stock(vector<int>&arr,int n){
    int mini=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
        maxprofit=max(maxprofit,arr[i]-mini);
    }
    return maxprofit;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=stock(arr,n);
    cout<<res;
    return 0;
}