#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}
void generate(string &s,int index,vector<string> &curr,vector<vector<string>> &ans){
    if(index==s.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(ispalindrome(s,index,i)){
            curr.push_back(s.substr(index,i-index+1));
            generate(s,i+1,curr,ans);
            curr.pop_back();
        }
    }
}
vector<vector<string>>partition(string s){
    vector<vector<string>>ans;
    vector<string>curr;
    generate(s,0,curr,ans);
    return ans;
}
int main(){
    string s;
    cin>>s;
    vector<vector<string>>res=partition(s);
    for(auto it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}