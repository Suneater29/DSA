#include<bits/stdc++.h>
using namespace std;
int maxpoint(vector<int> &arr,int n,int k){
    int maxsum=0;
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<k;i++){
        leftsum+=arr[i];
    }
    maxsum=leftsum;
    int index=n-1;
    for(int i=k-1;i>=0;i--){
        leftsum-=arr[i];
        rightsum+=arr[index];
        index--;
        maxsum=max(maxsum,leftsum+rightsum);
    }
    return maxsum;
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
    int ans=maxpoint(arr,n,k);
    cout<<ans;
    return 0;
}