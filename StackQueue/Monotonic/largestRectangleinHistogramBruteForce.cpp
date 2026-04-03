#include<bits/stdc++.h>
using namespace std;
vector<int>findnse(vector<int> &arr){
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=arr.size();
            }
            st.push(i);
        }
        return ans;
}
vector<int>findpse(vector<int> &arr){
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
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
int largestrectangle(vector<int> &arr){
    vector<int>nse=findnse(arr);
    vector<int>pse=findpse(arr);
    int area=0;
    for(int i=0;i<arr.size();i++){
            int width=(nse[i]-pse[i]-1)*arr[i];
            area=max(width,area);
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
    int res=largestrectangle(arr);
    cout<<res;
    return 0;
}