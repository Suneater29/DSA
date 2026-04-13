#include<bits/stdc++.h>
using namespace std;
int maxfruits(vector<int> &arr,int n){
    int left=0;
    int right=0;
    int maxlen=0;
    unordered_map<int,int>mpp;
    while(right<n){
        mpp[arr[right]]++;
        if(mpp.size()>2){
            mpp[arr[left]]--;
            if(mpp[arr[left]]==0) mpp.erase(arr[left]);
            left++;
        }
        if(mpp.size()<=2){
            maxlen=max(maxlen,right-left+1);
        }
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
    int ans=maxfruits(arr,n);
    cout<<ans;
    return 0;
}