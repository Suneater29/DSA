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
    int leftdist=abs(right-left);
    left=0;
    right=0;
    for(auto it:s){
        if(it=='R'|| it=='_') right++;
        else left++;
    }
    int rightdist=abs(right-left);
    return max(leftdist,rightdist);
}
int main(){
    string s;
    cin>>s;
    int ans=furthest(s);
    cout<<ans;
    return 0;
}