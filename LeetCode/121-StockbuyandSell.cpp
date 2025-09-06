#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&arr,int n){
    int Profitmin=INT_MAX;
    int Profitmax=0;
    for(auto i:arr){
        Profitmin=min(Profitmin,i);
        Profitmax=max(Profitmax,i-Profitmin);
    }
    return Profitmax;
}x
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=maxProfit(arr,n);
    cout<<res;
    return 0;
}