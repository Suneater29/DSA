#include<bits/stdc++.h>
using namespace std;
string mapWordWeights(vector<string>& words, vector<int>& weights) {
    string ans="";
    for(string i:words){
        int curr=0;
        for(char c:i){
            curr+=weights[c-'a'];
        }
        int val=curr%26;
        char charval='z'- val;
        ans+=charval;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>weight(26);
    for(int i=0;i<26;i++){
        cin>>weight[i];
    }
    string ans=mapWordWeights(arr,weight);
    cout<<ans;
    return 0;
}