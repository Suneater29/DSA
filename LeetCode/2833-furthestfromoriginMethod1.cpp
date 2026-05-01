#include<bits/stdc++.h>
using namespace std;
int furthest(string s){
    int left=0;
    int right=0;
    int blank=0;
    for(auto it:s){
        if(it=='L')left++;
        else if(it=='R') right++;
        else blank++;
    }
    return abs(right-left)+blank;
}
int main(){
    string s;
    cin>>s;
    int ans=furthest(s);
    cout<<ans;
    return 0;
}