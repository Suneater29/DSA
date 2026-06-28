#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    arr[0]=1;
    for(int i=1;i<n;i++){
        arr[i]=min(arr[i],arr[i-1]+1);
    }
    return arr.back();
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maximum(arr,n);
    cout<<ans;
    return 0;
}