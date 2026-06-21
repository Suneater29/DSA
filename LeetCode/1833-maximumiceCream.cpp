#include<bits/stdc++.h>
using namespace std;
int maxbars(vector<int> &arr,int coins){
    int cnt=0;
    sort(arr.begin(),arr.end());
    for(int i:arr){
        if(coins>=i){
            coins-=i;
            cnt++;
        }
        else{
            break;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int coins;
    cin>>coins;
    int ans=maxbars(arr,coins);
    cout<<ans;
    return 0;
}