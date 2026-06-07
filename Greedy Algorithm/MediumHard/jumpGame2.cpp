#include<bits/stdc++.h>
using namespace std;
int jumpfunc(vector<int> &arr,int n){
    int left=0;
    int right=0;
    int jump=0;
    while(right<n-1){
        int farthest=0;
        for(int i=left;i<=right;i++){
            farthest=max(farthest,i+arr[i]);
        }
        left=right+1;
        right=farthest;
        jump++;
    }
    return jump;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=jumpfunc(arr,n);
    cout<<ans;
    return 0;
}