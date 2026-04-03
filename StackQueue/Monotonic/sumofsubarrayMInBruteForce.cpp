#include<bits/stdc++.h>
using namespace std;
int sumsubarraymin(vector<int> &arr,int n){
    int mod=1e9+7;
    int sum=0;
    for(int i=0;i<n;i++){
        int mini=arr[i];
        for(int j=i;j<n;j++){
            mini=min(mini,arr[j]);
            sum=(sum+mini)%mod;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sumsubarraymin(arr,n);
    cout<<ans;
    return 0;
}