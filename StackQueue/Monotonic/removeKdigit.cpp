#include<bits/stdc++.h>
using namespace std;
string removek(string &arr,int k){
    stack<char>st;
    for(int i=0;i<arr.size();i++){
        while(!st.empty() && st.top()>arr[i] && k>0){
            st.pop();
            k--;
        }
        st.push(arr[i]);
    }
    while(!st.empty() && k>0){
        st.pop();
        k--;
    }
    if(st.empty()) return "0";
    string res="";
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    while(res.size()>0 && res.back()=='0'){
        st.pop();
    }
    reverse(res.begin(),res.end());
    if(res.empty()) return "0";
    return res;
}
int main(){
    string arr;
    cin>>arr;
    int k;
    cin>>k;
    string ans=removek(arr,k);
    cout<<ans;
    return 0;
}