#include<bits/stdc++.h>
using namespace std;
vector<int>repeatmiss(vector<int> &arr,int n){
    vector<int>freq(n+1,0);
    int missing=0;
    int repeating=0;
    for(int i:arr){
        freq[i]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]==2){
            repeating=i;
        }
        else if(freq[i]==0){
            missing=i;
        }
    }
    return {repeating,missing};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=repeatmiss(arr,n);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}