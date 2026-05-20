#include<bits/stdc++.h>
using namespace std;
bool good(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    int maxi=arr.back();
    if(n!=maxi+1) return false;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1) return false;
    }
    return arr[maxi-1]==maxi && arr[maxi]==maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=good(arr,n);
    cout<<result;
    return 0;
}