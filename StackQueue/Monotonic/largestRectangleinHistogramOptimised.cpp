#include<bits/stdc++.h>
using namespace std;
int largestrectangle(vector<int>arr,int n){
    stack<int>st;
    int area=0;
    int nse,pse;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            int element=st.top();
            st.pop();
            nse=i;
            pse=st.empty()?-1:st.top();
            area=max(arr[element]*(nse-pse-1),area);
        }
        st.push(i);
    }
    while(!st.empty()){
        int element=st.top();
        st.pop();
        nse=arr.size();
        pse=st.empty()?-1:st.top();
        area=max(arr[element]*(nse-pse-1),area);
    }
    return area;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=largestrectangle(arr,n);
    cout<<res;
    return 0;
}