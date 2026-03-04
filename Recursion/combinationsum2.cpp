#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int k,int index,vector<int> &curr,vector<vector<int>> &ans){
    if(k==0){
        ans.push_back(curr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>k) break;
        curr.push_back(arr[i]);
        generate(arr,k-arr[i],i+1,curr,ans);
        curr.pop_back();
    }
}
vector<vector<int>>combinationsum(vector<int> &arr,int k){
    vector<vector<int>>ans;
    vector<int>curr;
    generate(arr,k,0,curr,ans);
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
    vector<vector<int>>res=combinationsum(arr,k);
    for(auto &it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}