#include<bits/stdc++.h>
using namespace std;
string postToInfix(string postfix) {
    stack<string>st;
    for(int i=0;i<postfix.size();i++){
        char ch=postfix[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            st.push(string(1,ch));
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push("("+op2+ch+op1+")");
        }
    }
    return st.top();
}
int main(){
    string s;
    cin>>s;
    string ans=postToInfix(s);
    cout<<ans;
    return 0;
}