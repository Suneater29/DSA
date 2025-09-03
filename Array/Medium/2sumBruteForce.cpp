#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int>&arr,int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
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
    bool res=sum(arr,n,target);
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}