#include<bits/stdc++.h>
using namespace std;
int majoritysubarr(vector<int> &arr,int n,int target){
    int subarr=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i;j<n;j++){
            if(arr[j]==target) cnt++;
            if(cnt>(j-i+1)/2) subarr++;
        }
    }
    return subarr;
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
    int ans=majoritysubarr(arr,n,target);
    cout<<ans;
    return 0;
}