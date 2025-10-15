#include<bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int>num1,int m,vector<int>num2,int n){
    int left=0;
    int right=0;
    int index=0;
    vector<int>num3(m+n);
    while(left<m && right<n){
        if(num1[left]<=num2[right]){
            num3[index]=num1[left];
            index++;
            left++;
        }
        else{
            num3[index]=num2[right];
            index++;
            right++;
        }
    }
    while(left<m){
        num3[index]=num1[left];
        index++;
        left++;
    }
    while(right<n){
        num3[index]=num2[right];
        index++;
        right++;
    }
    return num3;
}
int main(){
    int m;
    cin>>m;
    vector<int>num1(m);
    for(int i=0;i<m;i++){
        cin>>num1[i];
    }
    int n;
    cin>>n;
    vector<int>num2(n);
    for(int i=0;i<n;i++){
        cin>>num2[i];
    }
    vector<int>res=merge(num1,m,num2,n);
    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}