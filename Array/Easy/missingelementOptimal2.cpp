//XOR solution
#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&arr,int n){
    // int xor1=0;
    // for(int i=0;i<n;i++){
    //     xor1=xor1^arr[i];
    // }
    // int xor2=0;
    // for(int i=0;i<n;i++){
    //     xor2=xor2^arr[i];
    // }
    // return (xor1^xor2);
    //above solution is also correct but it has a TC of 2n to improve it use the below method in which we use only one loop
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    // xor1=xor1^n;
    return (xor1^xor2);
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