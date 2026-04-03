#include<bits/stdc++.h>
using namespace std;
string postfixToPrefix(string &s){
    stack<string>st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            st.push(string(1,ch));
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push(ch+op2+op1);
        }
    }
    return st.top();
}
int main(){
    string s;
    cin>>s;
    string ans=postfixToPrefix(s);
    cout<<ans;
    return 0;
}