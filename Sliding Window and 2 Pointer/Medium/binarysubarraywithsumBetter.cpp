#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int> &arr,int n,int goal){
    int cnt=0;
    int prefixsum=0;
    unordered_map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        prefixsum+=arr[i];
        if(mpp.find(prefixsum-goal)!=mpp.end()){
            cnt+=mpp[prefixsum-goal];
        }
        mpp[prefixsum]++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int goal;
    cin>>goal;
    int ans=subarraysum(arr,n,goal);
    cout<<ans;
    return 0;
}