#include<bits/stdc++.h>
using namespace std;
void generate(int n,int k,int first,vector<int> &curr,vector<vector<int>> &ans){
    if(n==0 && curr.size()==k){
        ans.push_back(curr);
        return;
    }
    if(k>n || curr.size()>k) return;
    for(int i=first;i<=9;i++){
        if(i<=n){
            curr.push_back(i);
            generate(n-i,k,i+1,curr,ans);
            curr.pop_back();
        }
        else{
            break;
        }
    }
}
vector<vector<int>>combination(int n,int k){
    vector<vector<int>>ans;
    vector<int>curr;
    generate(n,k,1,curr,ans);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<vector<int>>res=combination(n,k);
    for(auto it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}