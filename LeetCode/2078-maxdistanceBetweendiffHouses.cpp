#include<bits/stdc++.h>
using namespace std;
int maxdistance(vector<int> &arr,int n){
    int dist=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1]){
            dist=max(dist,(n-1)-i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[0]){
            dist=max(dist,i);
            break;
        }
    }
    return dist;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maxdistance(arr,n);
    cout<<ans;
    return 0;
}