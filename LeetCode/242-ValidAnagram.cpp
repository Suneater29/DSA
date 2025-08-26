#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s ,string t){
    if(s.size()==t.size()){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
    return false;
}
int main(){
    string s ;
    cin>>s;
    string t;
    cin>>t;
    bool result=isAnagram(s,t);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}