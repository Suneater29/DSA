#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&arr,int n,int mid){
    int student=1;
    long long pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student;
}
int allocation(vector<int>&arr,int n,int k){
    if(k>n) return -1;
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
    int res=allocation(arr,n,k);
    cout<<res;
    return 0;
}