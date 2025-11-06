#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int>&arr,int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=low+((high-low)/2);
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return arr[low];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=minimum(arr,n);
    cout<<min;
    return 0;
}