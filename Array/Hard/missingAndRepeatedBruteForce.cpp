#include<bits/stdc++.h>
using namespace std;
vector<int>number(vector<int>&arr,int n){
    unordered_map<int,int>mpp;
    vector<int>res;
    for(int i=0;i<n;i++){
        int count=0;
         for (int j = 0; j < n; j++) {
            if(arr[j] == i) count++;
        }
        if (count == 2){
            res.push_back(i);
        }
        mpp[arr[i]]++;
        if(mpp[arr[i]]>1){
            res.push_back(arr[i]);
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>num=number(arr,n);
    for(auto it : num){
        cout<<it<<" ";
    }
    return 0;
}