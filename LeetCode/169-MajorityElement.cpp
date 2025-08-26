#include<bits/stdc++.h>
using namespace std;
int mElement(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mElement(arr);
    return 0;
}