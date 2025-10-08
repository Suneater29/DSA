#include<bits/stdc++.h>
using namespace std;
int subZero(vector<int>&arr,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        int XOR=0;
        for(int j=i;j<n;j++){
            XOR=XOR^arr[j];
            if(XOR==k){
                count++;
            }
        }
    }
    return count;
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
    int ans=subZero(arr,n,k);
    cout<<ans;
    return 0;
}