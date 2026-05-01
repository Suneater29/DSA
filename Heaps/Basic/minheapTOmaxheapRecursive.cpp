#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr, int n, int i){
    int parent=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[parent]<arr[left]){
        parent=left;
    }
    if(right<n && arr[parent]<arr[right]){
        parent=right;
    }
    if(parent!=i){
        swap(arr[i],arr[parent]);
        heapify(arr,n,parent);
    }
}
vector<int>maxheap(vector<int> &arr,int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxheap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}