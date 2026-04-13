#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int> &arr,int n,int goal){
    int cnt=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==goal) cnt++;
        }
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
    int ans=subarraysum(arr,n,goal);
    cout<<ans;
    return 0;
}