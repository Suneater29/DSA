#include<bits/stdc++.h>
using namespace std;
bool rotate(string &a,string &b){
    string joined=a+b;
    if(a.size()!=b.size()) return false;
    if(joined.find(b)==string::npos) return false;
    else return true;
}
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    bool ans=rotate(a,b);
    cout<<ans;
    return 0;
}