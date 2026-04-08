#include<bits/stdc++.h>
using namespace std;
int longestsubstr(string &s){
    int left=0,right=0,maxlen=0;
    vector<int>hash(256,-1);
    while(right<s.size()){
        if(hash[s[right]]!=-1){
            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }
        }
        int len=right-left+1;
        maxlen=max(len,maxlen);
        hash[s[right]]=right;
        right++;
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    int ans=longestsubstr(s);
    cout<<ans;
    return 0;
}