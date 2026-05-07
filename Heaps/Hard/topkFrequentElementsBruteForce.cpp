#include<bits/stdc++.h>
using namespace std;
vector<int>topk(vector<int> &arr,int n,int k){
    unordered_map<int,int>mpp;
    for(int i:arr){
        mpp[i]++;
    }
    vector<pair<int,int>>temp;
    for(auto it:mpp){
        temp.push_back({it.second,it.first});
    }
    sort(temp.rbegin(),temp.rend());
    vector<int>ans;
    for(int i=0;i<k;i++){
        ans.push_back(temp[i].second);
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
    int k;
    cin>>k;
    vector<int>res=topk(arr,n,k);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}