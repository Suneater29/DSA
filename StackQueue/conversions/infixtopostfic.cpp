#include<bits/stdc++.h>
using namespace std;
int prec(char &ch){
	if(ch=='^') return 3;
	else if(ch=='*' || ch=='/') return 2;
	else if(ch=='+' || ch=='-') return 1;
	else return -1;
}
string infixToPostfix(string exp){
	string result;
	stack<char> st;
	for(int i=0;i<exp.size();i++){
		char ch=exp[i];
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
			result=result+ch;
		}
		else if(ch=='('){
			st.push(ch);
		}
		else if(ch==')'){
			while(st.top()!='('){
				result=result+st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && prec(ch)<=prec(st.top())){
				result=result+st.top();
				st.pop();
			}
			st.push(ch);
		}
	}
	while(!st.empty()){
		result=result+st.top();
		st.pop();
	}
	return result;
}
int main(){
    string s;
    cin>>s;
    string ans=infixToPostfix(s);
    cout<<ans;
    return 0;
}