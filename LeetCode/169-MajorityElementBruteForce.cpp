//this below is the brute force solution and although it is correct , but it's time comeplexity is high
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