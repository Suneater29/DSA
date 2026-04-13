#include<bits/stdc++.h>
using namespace std;
int longestchar(string &s,int k){
    int left=0;
    int right=0;
    int maxcnt=0;
    int maxlen=0;
    vector<int>hash(26,0);
    while(right<s.size()){
        hash[s[right]-'A']++;
        maxcnt=max(maxcnt,hash[s[right]-'A']);
        if((right-left+1)-maxcnt>k){
            hash[s[left]-'A']--;
            left++;
        }
        if((right-left+1)-maxcnt<=k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
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