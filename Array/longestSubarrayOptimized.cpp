#include <bits/stdc++.h> 
using namespace std;
int getLongestSubarray(vector<int>& arr, int k){
    int n=arr.size();
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
    int k;
    cin>>k;
    int res=getLongestSubarray(arr,k);
    cout<<res;
    return 0;
}