#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&arr,int n,int mid,int limit){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/(double)mid);
    }
    return sum;
}
int smallest(vector<int>&arr,int n,int limit){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    if(n>limit) return -1;
    while(low<high){
        int mid=low+((high-low)/2);
        if(sum(arr,n,mid,limit)<=limit){
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
    int limit;
    cin>>limit;
    int ans=smallest(arr,n,limit);
    cout<<ans;
    return 0;
}