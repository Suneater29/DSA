#include<bits/stdc++.h>
using namespace std;
int klargest(vector<int> &arr,int n,int k){
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    return arr[k-1];
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
    int ans=klargest(arr,n,k);
    cout<<ans;
    return 0;
}