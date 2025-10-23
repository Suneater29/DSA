#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            return i;
        }
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int Lbound=lowerBound(arr,n,x);
    cout<<Lbound;
    return 0;
}