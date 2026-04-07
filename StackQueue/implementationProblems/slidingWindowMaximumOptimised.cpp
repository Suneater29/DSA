#include<bits/stdc++.h>
using namespace std;
vector<int>slidingmax(vector<int> &arr,int n,int k){
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<=arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            ans.push_back(arr[dq.front()]);
        }
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