#include<bits/stdc++.h>
using namespace std;
int subZero(vector<int>&arr,int n,int k){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int count=0;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        int x=xr^k;
        count+=mpp[x];
        mpp[xr]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans=subZero(arr,n,k);
    cout<<ans;
    return 0;
}