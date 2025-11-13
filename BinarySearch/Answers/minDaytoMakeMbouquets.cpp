#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>&arr,int n,int mid,int m,int k){
    int cnt=0;
    int bouquets=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=mid){
            cnt++;
        }
        else{
            bouquets=bouquets+(cnt/k);
            cnt=0;
        }
    }
    bouquets=bouquets+(cnt/k);
    return bouquets>=m;
}
int minDays(vector<int>&arr,int n,int m,int k){
    int mini=*min_element(arr.begin(),arr.end());
    int maxi=*max_element(arr.begin(),arr.end());
    long long val=(long long)m*(long long)k;
    if(val>n) return -1;
    int low=mini;
    int high=maxi;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(possible(arr,n,mid,m,k)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int k;
    cin>>k;
    int ans=minDays(arr,n,m,k);
    cout<<ans;
    return 0;
}