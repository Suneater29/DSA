#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2,int n1,int n2) {
    stack<int>st;
    unordered_map<int,int>mpp;
    for(int i=nums2.size()-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()) mpp[nums2[i]]=-1;
        else mpp[nums2[i]]=st.top();
        st.push(nums2[i]);
    }
    vector<int>ans;
    for(int i=0;i<nums1.size();i++){
        ans.push_back(mpp[nums1[i]]);
    }
    return ans;
}
int main(){
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int>nge=nextGreaterElement(arr1,arr2,n1,n2);
    for(auto it:nge){
        cout<<it<<" ";
    }
    return 0;
}