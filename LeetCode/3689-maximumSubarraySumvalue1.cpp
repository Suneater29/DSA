#include<bits/stdc++.h>
using namespace std;
long long maxsubvalue(vector<int> &arr,int n,int k){
    int mini=arr[0];
    int maxi=arr[0];
    for(int i:arr){
        maxi=max(maxi,i);
        mini=min(mini,i);
    }
    return (long long)(maxi-mini)*k;
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
    long long ans=maxsubvalue(arr,n,k);
    cout<<ans;
    return 0;
}