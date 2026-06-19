#include<bits/stdc++.h>
using namespace std;
int highestalt(vector<int> &arr,int n){
    int maxAlt=0;
    int currAlt=0;
    for(int i:arr){
        currAlt+=i;
        maxAlt=max(maxAlt,currAlt);
    }
    return maxAlt;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=highestalt(arr,n);
    cout<<ans;
    return 0;
}