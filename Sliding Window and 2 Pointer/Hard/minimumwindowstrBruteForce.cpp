#include<bits/stdc++.h>
using namespace std;
string minwindow(string &s,string &t){
    if(s.size()<t.size()) return "";
    int minlen=INT_MAX;
    int start=-1;
    for(int i=0;i<s.size();i++){
        unordered_map<char,int>mpp;
        for(int j=0;j<t.size();j++){
            mpp[t[j]]++;
        }
        int cnt=0;
        for(int j=i;j<s.size();j++){
            if(mpp[s[j]]>0){
                cnt++;
            }
            mpp[s[j]]--;
            if(cnt==t.size()){
                if((j-i+1)<minlen){
                    minlen=j-i+1;
                    start=i;
                }
                break;
            }
        }
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