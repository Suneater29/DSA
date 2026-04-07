#include<bits/stdc++.h>
using namespace std;
vector<int>stockspan(vector<int> &arr,int n){
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j>=0;j--){
            if(arr[j]<=arr[i]){
                curr++;
            }
            else{
                break;
            }
        }
        ans[i]=curr;
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
    vector<int>res=stockspan(arr,n);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}