#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int> &arr,int n,int k){
    int left=0;
    int right=0;
    int cnt=0;
    unordered_map<int,int>mpp;
    while(right<n){
        mpp[arr[right]]++;
        while(mpp.size()>k){
            mpp[arr[left]]--;
            if(mpp[arr[left]]==0){
                mpp.erase(arr[left]);
            } 
            left++;
        }
        cnt+=(right-left+1);
        right++;
    }
    return cnt;
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
    int ans=subarray(arr,n,k)-subarray(arr,n,k-1);
    cout<<ans;
    return 0;
}