#include<bits/stdc++.h>
using namespace std;
int traffic(vector<int>&arr,int n,int k){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){
                count++;
            }
            if(count<=k){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
    //The above code is correct but the time complexity is n^2 which can be reduced 
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
    int res = traffic(arr,n,k);
    cout<<res;
    return 0;
}