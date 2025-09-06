#include<bits/stdc++.h>
using namespace std;
int position(vector<int>&arr,int n,int target){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i+1;
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int res=position(arr,n,target);
    cout<<res;
    return 0;
}