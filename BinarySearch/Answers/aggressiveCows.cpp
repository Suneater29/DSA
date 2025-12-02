#include<bits/stdc++.h>
using namespace std;
bool canweplace(vector<int>&arr,int n,int mid,int k){
    int cnt=1;
    int last=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-last)>=mid){
            cnt++;
            last=arr[i];
        }
        if(cnt>=k) return true;
    }
    return false;
}
int aggressive(vector<int>&arr,int n,int k){
    sort(arr.begin(),arr.end());
    int low=0;
    int high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=low+((high-low)/2);
        if(canweplace(arr,n,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
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
    int res=aggressive(arr,n,k);
    cout<<res;
    return 0;
}