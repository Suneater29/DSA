#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ind=-1;
    for(int i=s.size();i>=0;i--){
        if((s[i]-'0')%2==1){
            ind=i;
            break;
        }
    }
    int i=0;
    while(i<=ind && s[i]=='0'){
        i++;
    }
    string res=s.substr(i,ind-i+1);
    cout<<res;
    return 0;
}