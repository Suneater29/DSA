#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        bool flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==arr[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=missing(arr,n);
    cout<<res;
    return 0;
}