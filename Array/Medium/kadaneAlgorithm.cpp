#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> &arr,int n){
    int sum=0;
    int currsum=INT_MIN;
    for(int i:arr){
        sum+=i;
        if(sum>currsum){
            currsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return currsum;
}
int main(){
    int n;
    cin>>n;;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=kadane(arr,n);
    cout<<ans;
    return 0;
}