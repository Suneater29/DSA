#include<bits/stdc++.h>
using namespace std;
int assign(vector<int> &greed,int n,vector<int> &cookie,int m){
    sort(greed.begin(),greed.end());
    sort(cookie.begin(),cookie.end());
    int left=0;
    int right=0;
    int ans=0;
    while(left<n && right<m){
        if(greed[left]<=cookie[right]){
            ans++;
            left++;
            right++;
        }
        else{
            right++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>greed(n);
    for(int i=0;i<n;i++){
        cin>>greed[i];
    }
    int m;
    cin>>m;
    vector<int>cookie(m);
    for(int i=0;i<m;i++){
        cin>>cookie[i];
    }
    int result=assign(greed,n,cookie,m);
    cout<<result;
    return 0;
}