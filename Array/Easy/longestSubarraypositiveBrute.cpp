#include<bits/stdc++.h>
using namespace std;
int longest(vector<int>&arr,int n,int k){
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==k){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
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
    int res=longest(arr,n,k);
    cout<<res;
    return 0;
}