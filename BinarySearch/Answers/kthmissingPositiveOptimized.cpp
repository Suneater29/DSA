#include<bits/stdc++.h>
using namespace std;
int number(vector<int>&arr,int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        int missing=arr[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return (low+k);
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
    int res=number(arr,n,k);
    cout<<res;
    return 0;
}