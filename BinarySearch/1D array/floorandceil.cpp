#include<bits/stdc++.h>
using namespace std;
int getfloor(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int getceil(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
pair<int,int>getnums(vector<int>&arr,int n,int x){
    int floor=getfloor(arr,n,x);
    int ceil=getceil(arr,n,x);
    return make_pair(floor,ceil);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    pair<int,int>nums=getnums(arr,n,x);
    cout<<nums.first<<" "<<nums.second;
    return 0;
}