#include<bits/stdc++.h>
using namespace std;
string minwindow(string &s,string &t){
    if(s.size()<t.size()) return "";
        int left=0;
        int right=0;
        int cnt=0;
        int minlen=INT_MAX;
        int start=-1;
        unordered_map<char,int>mpp;
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        while(right<s.size()){
            if(mpp[s[right]]>0){
                cnt++;
            }
            mpp[s[right]]--;
            while(cnt==t.size()){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                mpp[s[left]]++;
                if(mpp[s[left]]>0) cnt--;
                left++;
            }
            right++;
        }
        if(start==-1) return "";
        return s.substr(start,minlen);
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string ans=minwindow(s,t);
    cout<<ans;
    return 0;
}