#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> &curr,int index){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(curr);
        }
        return;
    }
    if(arr[index]<=target){
        curr.push_back(arr[index]);
        generate(arr,target-arr[index],ans,curr,index);
        curr.pop_back();
    }
    generate(arr,target,ans,curr,index+1);
}
vector<vector<int>>combination(vector<int> &arr,int target){
    vector<vector<int>>ans;
    vector<int>curr;
    generate(arr,target,ans,curr,0);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<vector<int>>result=combination(arr,target);
    return 0;
}