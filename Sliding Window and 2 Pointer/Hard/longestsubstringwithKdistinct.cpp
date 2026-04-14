#include<bits/stdc++.h>
using namespace std;
int substrwithk(string &s,int k){
    int maxlen=-1;
    int left=0;
    int right=0;
    unordered_map<char,int>mpp;
    int different=0;
    while(right<s.size()){
        if(mpp[s[right]]==0) different++;
        mpp[s[right]]++;
        if(different>k){
            mpp[s[left]]--;
            if(mpp[s[left]]==0) different--;
            left++;
        }
        if(different==k){
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
    int ans=substrwithk(s,k);
    cout<<ans;
    return 0;
}