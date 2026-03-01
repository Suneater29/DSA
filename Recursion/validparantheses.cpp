#include<bits/stdc++.h>
using namespace std;
void valid(string curr,int open,int close,int n,vector<string> &ans){
    if(curr.length()==2*n){
        ans.push_back(curr);
        return;
    }
    if(open<n){
        valid(curr+'(',open+1,close,n,ans);
    }
    if(close<open){
        valid(curr+')',open,close+1,n,ans);
    }
}
vector<string> generateparantheses(int n){
    vector<string>res;
    valid("",0,0,n,res);
    return res;
}
int main(){
    int n;
    cin>>n;
    generateparantheses(n);
    return 0;
}