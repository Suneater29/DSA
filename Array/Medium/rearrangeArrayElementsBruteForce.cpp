#include<bits/stdc++.h>
using namespace std;
vector<int>rearrange(vector<int>&arr,int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    vector<int>res(n);
    for(int i=0;i<n/2;i++){
        res[2*i]=pos[i];
        res[2*i+1]=neg[i];
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
    vector<int>result=rearrange(arr,n);
    for(auto it : result){
        cout<<it<<" ";
    }
    return 0;
}