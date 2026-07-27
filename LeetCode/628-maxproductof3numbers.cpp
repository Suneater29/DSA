#include<bits/stdc++.h>
using namespace std;
int maxpro(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    int num1=arr[0]*arr[1]*arr[n-1];
    int num2=arr[0]*arr[n-2]*arr[n-3];
    return max(num1,num2);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=maxpro(arr,n);
    cout<<result;
    return 0;
}