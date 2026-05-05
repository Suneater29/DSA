#include<bits/stdc++.h>
using namespace std;
bool handstraight(vector<int> &arr,int n,int k){
    if(n%k!=0) return false;
    unordered_map<int,int>mpp;
    for(int i:arr){
        mpp[i]++;
    }
    sort(arr.begin(),arr.end());
    for(int i:arr){
        if(mpp[i]==0) continue;
        for(int x=0;x<k;x++){
            int num=i+x;
            if(mpp[num]==0) return false;
            mpp[num]--;
        }
    }
    return true;
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
    bool ans=handstraight(arr,n,k);
    cout<<ans;
    return 0;
}