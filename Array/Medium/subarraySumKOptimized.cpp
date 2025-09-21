#include<bits/stdc++.h>
using namespace std;
int sumk(vector<int>&arr,int n,int k ){
    unordered_map<int,int>mpp;
    mpp[0]=1;
    int presum=0;
    int count=0;
    for(int i=0;i<n;i++){
        presum=presum+arr[i];
        int remove=presum-k;
        count=count+mpp[remove];
        mpp[presum]=mpp[presum]+1;
    }
    return count;
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
    int res=sumk(arr,n,k);
    cout<<res;
    return 0;
}