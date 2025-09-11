#include<bits/stdc++.h>
using namespace std;
vector<int>rearrange(vector<int>&arr,int n){
    vector<int>res(n);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            res[pos]=arr[i];
            pos=pos+2;
        }
        else{
            res[neg]=arr[i];
            neg=neg+2;
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
    vector<int>result=rearrange(arr,n);
    for(auto it: result){
        cout<<it<<" ";
    }
    return 0;
}