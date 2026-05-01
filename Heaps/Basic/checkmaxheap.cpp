#include<bits/stdc++.h>
using namespace std;
bool checkmax(vector<int> &arr,int n){
    for(int i=0;i<=(n/2)-1;i++){
        int left=2*i+1;
        if(left<n && arr[i]<arr[left]) return false;
        int right=2*i+2;
        if(right<n && arr[i]<arr[right]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool res=checkmax(arr,n);
    cout<<res;
    return 0;
}