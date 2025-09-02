#include<bits/stdc++.h>
using namespace std;
int consecutive1(vector<int>&arr,int n){
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=consecutive1(arr,n);
    cout<<res;
    return 0;
}