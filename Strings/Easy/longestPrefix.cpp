#include<bits/stdc++.h>
using namespace std;
string longestPrefix(vector<string>&arr){
    if(arr.empty()) return "-1";
    sort(arr.begin(),arr.end());
    string first=arr[0];
    string last=arr[arr.size()-1];
    int len=min(first.size(),last.size());
    string ans="";
    for(int i=0;i<len;i++){
        if(first[i]!=last[i]){
            break;
        }
        ans=ans+first[i];
    }
    if(ans.empty()) return "-1";
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestPrefix(arr);
    return 0;
}