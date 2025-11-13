#include<bits/stdc++.h>
using namespace std;
long long totalTime(vector<int>&arr,int mid){
    long long hour=0;
    for(int p:arr){
        hour+=ceil((double)p/mid);
    }
    return hour;
}
int minDay(vector<int>&arr,int n, int h){
    int maxEle=*max_element(arr.begin(),arr.end());
    int low=0;
    int high=maxEle;
    int ans=maxEle;
    while(low<=high){
        int mid=low+((high-low)/2);
        long long time=totalTime(arr,mid);
        if(time<=h){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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
    int h;
    cin>>h;
    int res=minDay(arr,n,h);
    cout<<res;
    return 0;
}