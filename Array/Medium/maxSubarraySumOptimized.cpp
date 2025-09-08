#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int>&arr,int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        // int start=0;
        // int end=i;
        sum=sum+arr[i];
        maxi=sum;
    }
    if(maxi>sum){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
    if(maxi<0){
        return 0;
    }
    else{
        return maxi;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=maximum(arr,n);
    cout<<res;
    return 0;
}