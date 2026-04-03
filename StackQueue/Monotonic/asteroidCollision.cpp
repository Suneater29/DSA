#include<bits/stdc++.h>
using namespace std;
vector<int> asteroid(vector<int> &arr,int n){
    vector<int>st;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            st.push_back(arr[i]);
        }
        else{
            while(!st.empty() && st.back()>0 && st.back()<abs(arr[i])){
                st.pop_back();
            }
            if(!st.empty() && st.back()==abs(arr[i])){
                st.pop_back();
            }
            else if(st.empty() || st.back()<0){
                st.push_back(arr[i]);
            }
        }
    }
    return st;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=asteroid(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}