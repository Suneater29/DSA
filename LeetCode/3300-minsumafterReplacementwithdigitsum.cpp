#include<bits/stdc++.h>
using namespace std;
int minisum(vector<int> &nums,int n){
    int mini=INT_MAX;
    for(int i:nums){
        int sum=0;
        while(i>0){
            sum+=i%10;
            i/=10;
        }
        mini=min(mini,sum);
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=minisum(arr,n);
    cout<<ans;
    return 0;
}