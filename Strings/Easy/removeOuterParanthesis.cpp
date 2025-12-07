#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";
    int level=0;
    for(int i=0;i<s.size();i++){
        int ch=s[i];
        if(ch=='('){
            if(level>0) res+=ch;
            level++;
        }
        else if (ch==')'){
            level--;
            if(level>0) res+=ch;
        }
    }
    cout<<res;
    return 0;
}