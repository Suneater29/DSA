#include<bits/stdc++.h>
using namespace std;
int number(vector<int>&arr,int n){
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=number(arr,n);
    cout<<res;
    return 0;
}