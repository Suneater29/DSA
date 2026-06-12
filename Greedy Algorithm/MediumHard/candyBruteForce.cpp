#include<bits/stdc++.h>
using namespace std;
int mincandy(vector<int> &ratings,int n){
    vector<int>leftcheck(n);
    vector<int>rightcheck(n);
    leftcheck[0]=1;
    rightcheck[n-1]=1;
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            leftcheck[i]=leftcheck[i-1]+1;
        }
        else{
            leftcheck[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            rightcheck[i]=rightcheck[i+1]+1;
        }
        else{
            rightcheck[i]=1;
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        result=result+max(leftcheck[i],rightcheck[i]);
    }
    return result;
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