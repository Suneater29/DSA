#include<bits/stdc++.h>
using namespace std;
vector<int>maxsum(vector<int> &a,int n,vector<int> &b,int m,int k){
    vector<int>sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum.push_back(a[i]+b[j]);
        }
    }
    sort(sum.rbegin(),sum.rend());
    vector<int>ans;
    for(int i=0;i<k;i++){
        ans.push_back(sum[i]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int k;
    cin>>k;
    vector<int>res=maxsum(arr1,n,arr2,m,k);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}