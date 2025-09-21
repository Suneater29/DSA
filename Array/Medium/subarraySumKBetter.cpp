#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&arr, int n, int k){
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
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
    int res=sum(arr,n,k);
    cout<<res;
    return 0;
}