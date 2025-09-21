#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&arr,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int m=i;m<=j;m++){
                sum=sum+arr[m];
            }
            if(sum==k){
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
    // sum(arr,n,k);
    int ans=sum(arr,n,k);
    cout<<ans;
    return 0;
}