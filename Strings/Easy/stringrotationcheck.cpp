#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    string added=a+a;
    if(a.size()!=b.size()){
        cout<<false;
    }
    if(added.find(b)==string::npos){
        cout<<false;
    }
    else{
        cout<<true;
    }
    return 0;
}