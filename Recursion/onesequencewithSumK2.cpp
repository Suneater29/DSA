#include<bits/stdc++.h>
using namespace std;
bool generate(vector<int> &arr,int k,int index,int sum,vector<int> &curr,vector<vector<int>> &ans){
    if(index==arr.size()){
        if(sum==k){
            ans.push_back(curr);
            return true;
        }
        return false;;
    }
    curr.push_back(arr[index]);
    sum=sum+arr[index];
    if(generate(arr,k,index+1,sum,curr,ans) == true) return true;
    sum=sum-arr[index];
    curr.pop_back();
    if(generate(arr,k,index+1,sum,curr,ans)==true) return true;
    return false;
}
vector<vector<int>>subsequence(vector<int> &arr,int k){
    vector<vector<int>>ans;
    vector<int>curr;
    generate(arr,k,0,0,curr,ans);
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
    vector<vector<int>>res=subsequence(arr,k);
    for(auto &it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}