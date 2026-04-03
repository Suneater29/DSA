#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char>st;
    for(auto it:s){
        if(it=='(' || it=='{' || it=='['){
            st.push(it);
        }
        else{
            if(st.empty()) return false;
            char top=st.top();
            st.pop();
            if((it==')' && top=='(') ||(it=='}' && top=='{') || (it==']' && top=='[')){
                continue;
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    bool ans=isValid(s);
    cout<<ans;
    return 0;
}