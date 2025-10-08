#include<bits/stdc++.h>
using namespace std;
int subZero(vector<int>&arr,int n){
    unordered_map<long long ,int>mpp;
    int maxLen=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxLen=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxLen=max(maxLen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=subZero(arr,n);
    cout<<ans;
    return 0;
}