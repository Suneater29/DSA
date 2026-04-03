#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
vector<int>findnse(vector<int> &arr,int n){
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        else{
            ans[i]=n;
        }
        st.push(i);
    }
    return ans;
}
vector<int>findpsee(vector<int> &arr,int n){
    vector<int>ans(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        else{
            ans[i]=-1;
        }
        st.push(i);
    }
    return ans;
}
int subarrayminsum(vector<int> &arr,int n){
    vector<int>nse=findnse(arr,n);
    vector<int>psee=findpsee(arr,n);
    long long sum=0;
    for(int i=0;i<n;i++){
        long long left=i-psee[i];
        long long right=nse[i]-i;
        sum=(sum+((left*right)%mod*(long long)arr[i]%mod))%mod;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=subarrayminsum(arr,n);
    cout<<ans;
    return 0;
}