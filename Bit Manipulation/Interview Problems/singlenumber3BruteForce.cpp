#include<bits/stdc++.h>
using namespace std;
vector<int>single3(vector<int> &arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    vector<int>ans;
    for(auto it:mpp){
        if(it.second%2==1){
            ans.push_back(it.first);
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=single3(arr,n);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}