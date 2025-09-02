#include<bits/stdc++.h>
using namespace std;
int traffic(vector<int>&arr,int n,int k){
    int left=0,right=0;
    int maxLen=0;
    int count=0;
    while(right<n){
        if(arr[right]==0){
            count++;
        }
        while(count>k){
            if(arr[left]==0){
                count--;
            }
            left++;
        }
        maxLen=max(maxLen,right-left+1);
        right++;
    }
    return maxLen;
    //The above code is optimized because we are using 2 pointer approach and hence the time complexity is o(n) only
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
    int res = traffic(arr,n,k);
    cout<<res;
    return 0;
}