#include<bits/stdc++.h>
using namespace std;
vector<int>nxtPermutation(vector<int>&arr,int n){
    next_permutation(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res=nxtPermutation(arr,n);
    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}