#include<bits/stdc++.h>
using namespace std;
int maxlength(vector<int> &arr,int n,int k){
    int low=0;
    int ans=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        while(mpp[arr[i]]>k){
            mpp[arr[low]]--;
            low++;
        }
        ans=max(ans,i-low+1);
    }
    return ans;
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
    int result=maxlength(arr,n,k);
    cout<<result;
    return 0;
}