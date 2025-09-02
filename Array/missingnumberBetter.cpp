#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=0;i<n;i++){
        if(hash[i]==0){
            return i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result =missing(arr,n);
    cout<<result;
    return 0;
}