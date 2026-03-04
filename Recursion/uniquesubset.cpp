#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int index,vector<int> &curr,vector<vector<int>> &ans){
    ans.push_back(curr);
    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        curr.push_back(arr[i]);
        generate(arr,i+1,curr,ans);
        curr.pop_back();
    }
}
vector<vector<int>>subset(vector<int> &arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>curr;
    generate(arr,0,curr,ans);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>res=subset(arr);
    for(auto it: res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}