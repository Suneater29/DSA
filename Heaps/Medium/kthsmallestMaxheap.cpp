#include<bits/stdc++.h>
using namespace std;
int ksmallest(vector<int> &arr,int n,int k){
    // maxheap
    priority_queue<int>pq; 
    for(int i=0;i<k;i++) pq.push(arr[i]);
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans=ksmallest(arr,n,k);
    cout<<ans;
    return 0;
}