#include<bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> &arr,int n,vector<int> &query,int q){
    vector<int>ans;
    for(int i=0;i<q;i++){
        int index=query[i];
        int cnt=0;
        for(int j=index;j<n;j++){
            if(arr[index]<arr[index]) cnt++;
        }
        ans.push_back(cnt);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    vector<int>query(q);
    for(int i=0;i<query.size();i++){
        cin>>query[i];
    }
    vector<int>res=nge(arr,n,query,q);
    for(auto it: res){
        cout<<it<<" ";
    }
    return 0;
}