#include<bits/stdc++.h>
using namespace std;
int longestchar(string &s,int k){
    int maxlen=0;
    for(int i=0;i<s.size();i++){
        int maxcnt=0;
        vector<int>hash(26,0);
        for(int j=i;j<s.size();j++){
            hash[s[j]-'A']++;
            maxcnt=max(maxcnt,hash[s[j]-'A']);
            int changes=(j-i+1)-maxcnt;
            while(changes<=k){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int ans=longestchar(s,k);
    cout<<ans;
    return 0;
}