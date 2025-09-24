#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum(vector<int>&arr,int n){
    set<vector<int>>st;
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[left+1];
        if(sum = -(arr[right])){
            vector<int>triplet={arr[left],arr[left+1],arr[right]};
            sort(triplet.begin(),triplet.end());
            st.insert(triplet);
        }
        else if(sum<arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return vector<vector<int>>(st.begin(),st.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>res=sum(arr,n);
    for(auto it : res){
        for(auto num : it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}