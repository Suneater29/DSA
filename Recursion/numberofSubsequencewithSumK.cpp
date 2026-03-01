#include<bits/stdc++.h>
using namespace std;
int generate(vector<int> &arr,int k,int index,int sum){
    if(index==arr.size()){
        if(sum==k){
            return 1;
        }
        return 0;
    }
    sum=sum+arr[index];
    int l=generate(arr,k,index+1,sum);
    sum=sum-arr[index];
    int r=generate(arr,k,index+1,sum);
    return l+r;
}
int subsequence(vector<int> &arr,int k){
    generate(arr,k,0,0);
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
    int res=subsequence(arr,k);
    cout<<res;
    return 0;
}