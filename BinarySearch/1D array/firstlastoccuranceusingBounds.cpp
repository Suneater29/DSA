#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>&arr,int n, int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
pair<int,int>occurance(vector<int>&arr,int n,int x){
    int first=lowerbound(arr, n,x);
    int last=upperbound(arr,n,x);
    if(first==n || arr[first]!=x){
        return {-1,-1};
    }
    return {first,last-1};
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
    pair<int,int>nums=occurance(arr,n,x);
    cout<<nums.first<<" "<<nums.second;
    return 0;
}