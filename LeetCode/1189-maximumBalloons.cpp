#include<bits/stdc++.h>
using namespace std;
int maxballoon(string &s){
    vector<int>mpp(26,0);
    for(char i:s){
        mpp[i-'a']++;
    }
    return min({mpp['b'-'a'],mpp['a'-'a'],mpp['l'-'a']/2,mpp['o'-'a']/2,mpp['n'-'a']});
}
int main(){
    string s;
    cin>>s;
    int ans=maxballoon(s);
    cout<<ans;
    return 0;
}