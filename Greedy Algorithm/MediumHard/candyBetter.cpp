#include<bits/stdc++.h>
using namespace std;
int mincandy(vector<int> &ratings,int n){
    vector<int>leftcheck(n);
    leftcheck[0]=1;
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            leftcheck[i]=leftcheck[i-1]+1;
        }
        else{
            leftcheck[i]=1;
        }
    }
    int curr=1;
    int rightcheck=1;
    int sum=max(leftcheck[n-1],1);
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            curr=rightcheck+1;
            rightcheck=curr;
        }
        else{
            rightcheck=1;
            curr=1;
        }
        sum+=max(leftcheck[i],curr);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=mincandy(arr,n);
    cout<<ans;
    return 0;
}