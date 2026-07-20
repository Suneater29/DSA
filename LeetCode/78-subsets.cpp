#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int n,vector<vector<int>>& ans,vector<int>& curr,int index){
    if(index==arr.size()){
        ans.push_back(curr);
        return;
    }
    generate(arr,n,ans,curr,index+1);
    curr.push_back(arr[index]);
    generate(arr,n,ans,curr,index+1);
    curr.pop_back();
}
vector<vector<int>>subset(vector<int> &arr,int n){
    vector<vector<int>>ans;
    vector<int>curr;
    generate(arr,n,ans,curr,0);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>result=subset(arr,n);
    return 0;
}