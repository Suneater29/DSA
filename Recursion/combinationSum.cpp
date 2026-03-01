#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int k,int index,vector<int> &curr,vector<vector<int>> &ans){
    if(index==arr.size()){
        if(k==0){
            ans.push_back(curr);
        }
        return;
    }
    if(arr[index]<=k){
        curr.push_back(arr[index]);
        generate(arr,k-arr[index],index,curr,ans);
        curr.pop_back();
    }
    generate(arr,k,index+1,curr,ans);
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