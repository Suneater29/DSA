#include<bits/stdc++.h>
using namespace std;
//printing all the subsets or subsequences
void generate(string &s,int index,string curr,vector<string> &ans){
    if(index==s.size()){
        ans.push_back(curr);
        return;
    }
    generate(s,index+1,curr,ans);
    curr.push_back(s[index]);
    generate(s,index+1,curr,ans);
    curr.pop_back();
}
void generatesubsequesnce(string s){
    vector<string>ans;
    generate(s,0,"",ans);
}
int main(){
    cout<<"hello world";
    return 0;
}