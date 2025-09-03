#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int>&arr,int n,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more = target-a;
        if(mpp.find(more)!=mpp.end()){
            return true;
        }
        mpp[a]=i;
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