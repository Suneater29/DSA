#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=check(arr,n);
    cout<<res;
    return 0;
}