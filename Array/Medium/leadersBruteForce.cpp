#include<bits/stdc++.h>
using namespace std;
vector<int>leader(vector<int>&arr,int n){
    vector<int>result;
    bool leader;
    for(int i=0;i<n;i++){
        leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            result.push_back(arr[i]);
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res=leader(arr,n);
    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}