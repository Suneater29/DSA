#include<bits/stdc++.h>
using namespace std;
vector<int>slidingmax(vector<int> &arr,int n,int k){
    vector<int>ans;
    for(int i=0;i<=n-k;i++){
        int maxi=arr[i];
        for(int j=i;j<i+k;j++){
            maxi=max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
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
    vector<int>res=slidingmax(arr,n,k);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}