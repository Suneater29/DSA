#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&arr,int n,int mid ,int days){
    int load=0;
    int day=1;
    for(int i=0;i<n;i++){
        if((load+arr[i])>mid){
            day=day+1;
            load=arr[i];
        }
        else{
            load+=arr[i];
        }
    }
    return day;
}
int minDays(vector<int>&arr,int n,int days){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=low+((high-low)/2);
        if(possible(arr,n,mid,days)<=days){
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
    int days;
    cin>>days;
    int res=minDays(arr,n,days);
    cout<<res;
    return 0;
}