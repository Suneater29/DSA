#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int> &arr,int n,int goal){
    int left=0;
    int right=0;
    int sum=0;
    int cnt=0;
    while(right<n){
        sum+=arr[right]%2;
        while(sum>goal){
            sum-=arr[left]%2;
            left++;
        }
        cnt+=right-left+1;
        right++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int goal;
    cin>>goal;
    int ans=subarraysum(arr,n,goal)-subarraysum(arr,n,goal-1);
    cout<<ans;
    return 0;
}