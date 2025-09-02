#include<bits/stdc++.h>
using namespace std;
int longest(vector<int>&arr,int n,long long k){
    map<long long ,int>preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long k;
    cin>>k;
    int res=longest(arr,n,k);
    cout<<res;
    return 0;
}

//This above code is optimised for when array has positive negative and zeroes