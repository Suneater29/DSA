#include<bits/stdc++.h>
using namespace std;
int sequence(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    int cnt=0;
    int lastSmall=INT_MIN;
    int longest=1;
    if(n==0) return 0;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmall){
            cnt+=1;
            lastSmall=arr[i];
        }
        else if(lastSmall!=arr[i]){
            cnt=1;
            lastSmall=arr[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=sequence(arr,n);
    cout<<result;
    return 0;
}