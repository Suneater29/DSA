#include<bits/stdc++.h>
using namespace std;
int longestchar(string &s,int k){
    int left=0;
    int right=0;
    int maxcnt=0;
    int maxlen=0;
    unordered_map<char,int>mpp;
    while(right<s.size()){
        mpp[s[right]]++;
        maxcnt=max(maxcnt,mpp[s[right]]);
        while((right-left+1)-maxcnt>k){
            mpp[s[left]]--;
            left++;
        }
        maxlen=max(maxlen,right-left+1);
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