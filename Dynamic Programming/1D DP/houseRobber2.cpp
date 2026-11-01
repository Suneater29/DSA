#include<bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums,int n){
    int prev1=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int take=nums[i]+prev2;
        int leave=prev1;
        int curr=max(take,leave);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=rob(nums,n);
    cout<<ans;
    return 0;
}