#include<bits/stdc++.h>
using namespace std;
vector<int>repeatmiss(vector<int> &arr,int n){
    vector<int>ans;
    sort(arr.begin(),arr.end());
    unordered_map<int,int>mpp;
    for(int i:arr){
        mpp[i]++;
    }
    for(auto it:mpp){
        if(it.second==2){
            ans.push_back(it.first);
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(mpp.find(i)==mpp.end()){
            ans.push_back(i);
            break;
        }
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
    vector<int>result=repeatmiss(arr,n);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}