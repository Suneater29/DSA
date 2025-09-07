//in this solution we are using hashing
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr,int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
        if(hash[arr[i]]>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=majority(arr,n);
    cout<<res;
    return 0;
}