#include<bits/stdc++.h>
using namespace std;
string processing(string &s){
    string ans="";
    for(char c:s){
        if(c=='*'){
            if(!ans.empty()) ans.pop_back();
        }
        else if(c=='#') ans+=ans;
        else if(c=='%') reverse(ans.begin(),ans.end());
    else ans+=c;
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    string ans=processing(s);
    cout<<ans;
    return 0;
}