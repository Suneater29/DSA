#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res=missing(arr,n,k);
    cout<<res;
    return 0;
}