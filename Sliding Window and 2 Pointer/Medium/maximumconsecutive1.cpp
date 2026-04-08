#include<bits/stdc++.h>
using namespace std;
int maxcons1(vector<int> &arr,int n ,int k){
    int left=0,right=0,maxlen=0,zeroes=0;
    while(right<n){
        if(arr[right]==0) zeroes++;
        while(zeroes>k){
            if(arr[left]==0) zeroes--;
            left++;
        }
        int len=right-left+1;
        maxlen=max(len,maxlen);
        right++;
    }
    return maxlen;
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
    int ans=maxcons1(arr,n,k);
    cout<<ans;
    return 0;
}