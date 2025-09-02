//Using the sum mehtod
#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&arr,int n){
    int sum=(n*(n+1))/2;
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return (sum-s);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=missing(arr,n);
    cout<<res;
    return 0;
}