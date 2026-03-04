#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &arr,int n,int index,int sum,vector<int> &ans){
    if(index==n){
        ans.push_back(sum);
        return;
    }
    generate(arr,n,index+1,sum+arr[index],ans);
    generate(arr,n,index+1,sum,ans);
}
vector<int> subsetsum(vector<int> &arr,int n){
    vector<int>ans;
    generate(arr,n,0,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res=subsetsum(arr,n);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}