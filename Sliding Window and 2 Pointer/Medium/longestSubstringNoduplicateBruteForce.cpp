#include<bits/stdc++.h>
using namespace std;
int longestsubstr(string &s){
    int maxlen=0;
    for(int i=0;i<s.size();i++){
        vector<int>hash(256,0);
        for(int j=i;j<s.size();j++){
            if(hash[s[j]]==1) break;
            hash[s[j]]=1;
            int len=j-i+1;
            maxlen=max(maxlen,len);
        }
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