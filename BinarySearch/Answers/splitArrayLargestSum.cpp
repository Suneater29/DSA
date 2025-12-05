#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&arr,int n,int mid){
    int partition=1;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            partition++;
            sum=arr[i];
        }
    }
    return partition;
}
int splitArray(vector<int>&arr,int n,int k){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=low+((high-low)/2);
        if(possible(arr,n,mid)>k){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    int k;
    cin>>k;
    int res=splitArray(arr,n,k);
    cout<<res;
    return 0;
}