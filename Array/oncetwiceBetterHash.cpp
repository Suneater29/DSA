#include<bits/stdc++.h>
using namespace std;
int number(vector<int>&arr,int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    vector<int>hash(maxi+1); 
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=number(arr,n);
    cout<<res;
    return 0;
}