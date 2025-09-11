#include<bits/stdc++.h>
using namespace std;
pair<vector<int>,int>rearrange(vector<int>&arr,int n){
    int maxi=INT_MIN;
    int sum=0;
    int ansStart=-1;
    int ansEnd=-1;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
        sum=0;
    }
    }
    vector<int>res;
    if(ansStart!=-1 && ansEnd!=-1){
        for(int i=ansStart;i<=ansEnd;i++){
            res.push_back(arr[i]);
        }
    }
    return {res,maxi};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto res=rearrange(arr,n);
    for(auto it:res.first){
        cout<<it<<" ";
    }
    cout<<endl<<res.second;
    return 0;
}