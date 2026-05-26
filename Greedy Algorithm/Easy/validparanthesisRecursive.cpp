#include<bits/stdc++.h>
using namespace std;
bool valid(string &s,int ind,int cnt){
    int n=s.size();
    if(cnt<0) return false;
    if(ind==n) return (cnt==0);
    if(s[ind]=='('){
        return valid(s,ind+1,cnt+1);
    }
    if(s[ind]==')'){
        return valid(s,ind+1,cnt-1);
    }
    return valid(s,ind+1,cnt+1) || valid(s,ind+1,cnt-1) || valid(s,ind+1,cnt);
}
bool paranthesis(string &s){
    int ind=0;
    int cnt=0;
    return valid(s,ind,cnt);
}
int main(){
    string s;
    cin>>s;
    bool res=paranthesis(s);
    cout<<res;
    return 0;
}