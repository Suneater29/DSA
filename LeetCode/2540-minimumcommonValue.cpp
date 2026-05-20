#include<bits/stdc++.h>
using namespace std;
int getcommon(vector<int>& nums1,int n, vector<int>& nums2,int m) {
    int left=0;
    int right=0;
    while(left<n && right<m){
        if(nums1[left]==nums2[right]) return nums1[left];
        else if(nums1[left]<nums2[right]) left++;
        else right++;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int ans=getcommon(arr1,n,arr2,m);
    cout<<ans;
    return 0;
}