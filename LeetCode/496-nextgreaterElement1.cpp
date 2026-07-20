#include<bits/stdc++.h>
using namespace std;
vector<int>nge1(vector<int> &arr1,int n,vector<int> &arr2,int m){
    stack<int>st;
    unordered_map<int,int>mpp;
    for(int i=m-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr2[i]){
            st.pop();
        }
        if(st.empty()){
            mpp[arr2[i]]=-1;
        }
        else{
            mpp[arr2[i]]=st.top();
        }
        st.push(arr2[i]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(mpp[arr1[i]]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>result=nge1(arr1,n,arr2,m);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}