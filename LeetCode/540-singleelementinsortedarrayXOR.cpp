#include<bits/stdc++.h>
using namespace std;
int single(vector<int> &arr,int n){
    int ans=0;
    for(int i:arr){
        ans^=i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=single(arr,n);
    cout<<ans;
    return 0;
}