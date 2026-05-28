#include<bits/stdc++.h>
using namespace std;
bool jump(vector<int> &arr,int n){
    int index=0;
    for(int i=0;i<n;i++){
        if(i>index) return false;
        index=max(index,i+arr[i]);
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
    bool ans=jump(arr,n);
    cout<<ans;
    return 0;
}