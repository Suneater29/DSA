#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&arr,int n,int target,int low,int high){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return binary(arr,n,target,low,mid-1);
    else{
        return binary(arr,n,target,mid+1,high);
    }
}
int search(vector<int>&arr,int n,int target){
    return binary(arr,n,target,0,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int num=search(arr,n,target);
    cout<<num;
    return 0;
}