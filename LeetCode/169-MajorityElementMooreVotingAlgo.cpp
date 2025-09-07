#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr,int n){
    int element; //element do not have any element
    int count=0; //count is 0 initially
    for(int i=0;i<n;i++){
        if(count==0){
            element=arr[i];
            count++;
        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    //checking if majority element is even present in array or not
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cnt++;
        }
    }
    if(cnt>n/2){
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