#include<bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int>&num1,int n,vector<int>&num2,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(num1[left]>num2[right]){
            swap(num1[left],num2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    vector<int>res;
    res.insert(res.end(),num1.begin(),num1.end());
    res.insert(res.end(),num2.begin(),num2.end());
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>num1(n);
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }
    int m;
    cin>>m;
    vector<int>num2(m);
    for(int i=0;i<m;i++){
        cin>>num2[i];
    }
    vector<int>ans=merge(num1,n,num2,m);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}