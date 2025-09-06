#include<bits/stdc++.h>
using namespace std;
int removed(vector<int>&arr,int n,int val){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=val){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int res=removed(arr,n,val);
    cout<<res;
    return 0;
}