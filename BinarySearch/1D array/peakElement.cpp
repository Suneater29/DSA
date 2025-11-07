#include<bits/stdc++.h>
using namespace std;
int peak(vector<int>&arr,int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=low+((high-low)/2);
        if(arr[mid]>arr[mid+1]){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=peak(arr,n);
    cout<<num;
    return 0;
}