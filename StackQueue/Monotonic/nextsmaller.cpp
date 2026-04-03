#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerEle(vector<int>& arr,int n) {
    stack<int>st;
    vector<int>ans(n,-1);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();
        st.push(arr[i]);
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
    vector<int>ans=nextSmallerEle(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}