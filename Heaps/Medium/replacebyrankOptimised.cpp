#include<bits/stdc++.h>
using namespace std;
vector<int>replacebyrank(vector<int> &arr,int n){
    vector<int>temp=arr;
    sort(temp.begin(),temp.end());
    unordered_map<int,int>mpp;
    int rank=1;
    for(int i:temp){
        if(mpp.find(i)==mpp.end()){
            mpp[i]=rank;
            rank++;
        }
    }
    vector<int>ans;
    for(int i:arr){
        ans.push_back(mpp[i]);
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
    vector<int>ans=replacebyrank(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}