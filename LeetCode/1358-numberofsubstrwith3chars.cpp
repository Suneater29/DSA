#include<bits/stdc++.h>
using namespace std;
int numberofstr(string &s){
    vector<int>hash(3,0);
    int n=s.size();
    int left=0;
    int right=0;
    int cnt=0;
    while(right<n){
        hash[s[right]-'a']++;
        while(hash[0]>0 && hash[1]>0 && hash[2]>0){
            cnt+=n-right;
            hash[s[left]-'a']--;
            left++;   
        }
        right++;
    }
    return cnt;
}
int main(){
    string s;
    cin>>s;
    int ans=numberofstr(s);
    cout<<ans;
    return 0;
}