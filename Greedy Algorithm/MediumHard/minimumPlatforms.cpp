#include<bits/stdc++.h>
using namespace std;
int minplat(vector<int> &arr,vector<int> &dep,int n){
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=1;
    int j=0;
    int cnt=1;
    int platform=1;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            platform++;
            i++;
        }
        else{
            platform--;
            j++;
        }
        cnt=max(cnt,platform);
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
    vector<int>dep(n);
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    int ans=minplat(arr,dep,n);
    cout<<ans;
    return 0;
}