#include<bits/stdc++.h>
using namespace std;
vector<int>separate(vector<int> &arr,int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        string s=to_string(arr[i]);
        for(char c:s){
            ans.push_back(c-'0');
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
    vector<int>res=separate(arr,n);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}