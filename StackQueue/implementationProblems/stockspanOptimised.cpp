#include<bits/stdc++.h>
using namespace std;
vector<int>findpge(vector<int> &arr,int n){
    stack<int>st;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}
vector<int>stockspan(vector<int> &arr,int n){
    vector<int>pge=findpge(arr,n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(i-pge[i]);
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
    vector<int>res=stockspan(arr,n);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
