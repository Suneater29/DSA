#include<bits/stdc++.h>
using namespace std;
int removemaxmin(vector<int> &nums){
    int n=nums.size();
    int maxind=0;
    int minind=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]>nums[maxind]) maxind=i;
        if(nums[i]<nums[minind]) minind=i;
    }
    int left=min(minind,maxind);
    int right=max(minind,maxind);
    ans=min({right+1 , n-left , left+1+n-right });
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=removemaxmin(arr);
    cout<<result;
    return 0;
}