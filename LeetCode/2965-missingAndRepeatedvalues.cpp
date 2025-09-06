#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n*n);
    for(int i=1;i<=n*n;i++){
        cin>>arr[i];
    }
    int hash[n*n]={0};
    for(int i=0;i<n*n;i++){
        hash[i]+=1;
    }
    // if(hash[0]!=arr[]){

    // }
    return 0;
}