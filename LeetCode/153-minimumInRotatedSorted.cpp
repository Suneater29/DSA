#include<bits/stdc++.h>
using namespace std;
int mini(vector<int>& nums,int n) {
    sort(nums.begin(),nums.end());
    return nums[0];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=mini(arr,n);
    cout<<ans;
    return 0;
}