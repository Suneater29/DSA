//MOORE'S VOTING ALGORITHM
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr,int n){
    int element;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            element=arr[i];
            count=1;
        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            num++;
        }
    }
    if(num>n/2){
        return element;
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=majority(arr,n);
    cout<<res;
    return 0;
}