#include<bits/stdc++.h>
using namespace std;
char processing(string &s,long long k){
    const long long limit=1e18;
    string ans="";
    long long len=0;
    for(char c:s){
        if(c=='*'){
            if(len>0) len--;
        }
        else if(c=='#') len=min(len*2,limit);
        else if(c=='%') continue;
        else len++;
    }
    if(k>=len) return '.';
    for(int i=s.size()-1;i>=0;i--){
        char c=s[i];
        if(c=='*') len++;
        else if(c=='#'){
            long long mid=len/2;
            if(k>=mid){
                k=k-mid;
            }
            len=mid;
        }
        else if(c=='%'){
            k=len-1-k;
        }
        else{
            len--;
            if(len==k) return c;
        }
    }
    return '.';
}
int main(){
    string s;
    cin>>s;
    long long k;
    cin>>k;
    char ans=processing(s,k);
    cout<<ans;
    return 0;
}