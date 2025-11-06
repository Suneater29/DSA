#include<bits/stdc++.h>
using namespace std;
int searching(vector<int>&arr,int n,int target){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target) return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return ans;
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
    int num=searching(arr,n,target);
    cout<<num;
    return 0;
}