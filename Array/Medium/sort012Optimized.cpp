#include<bits/stdc++.h>
using namespace std;
vector<int>sorted(vector<int>&arr,int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
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
    vector<int>res=sorted(arr,n);
    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}