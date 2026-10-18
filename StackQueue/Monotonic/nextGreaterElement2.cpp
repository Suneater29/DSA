#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement2(vector<int>& arr, int n)
{
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=2*n-1;i>=0;i--){
        int ind=i%n;
        while(!st.empty() && arr[st.top()]<=arr[ind]) st.pop();
        if(i<n){
            if(!st.empty()){
                ans[ind]=arr[st.top()];
            }
        }
        st.push(ind);
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
    vector<int>nge=nextGreaterElement2(arr,n);
    for(auto it:nge){
        cout<<it<<" ";
    }
    return 0;
}