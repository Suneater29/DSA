#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int>&arr,int n,int target){
    int left=0;
    int right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(arr[sum]==target){
            return true;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool res=sum(arr,n,target);
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}