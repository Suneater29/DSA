#include<bits/stdc++.h>
using namespace std;
int substringinword(vector<string> &pattern,string &word){
    int cnt=0;
    for(string s:pattern){
        if(word.find(s)!=string::npos) cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<string>pattern(n);
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    string word;
    cin>>word;
    int ans=substringinword(pattern,word);
    cout<<ans;
    return 0;
}