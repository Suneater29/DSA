#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    if(a.size()!=b.size()) cout<<false;
    if(a.size()==b.size()){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<true;
    }
    return 0;
}