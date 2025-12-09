#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s){
    vector<string>newstring;
    string words="";
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            words+=s[i];
        }
        else if(!words.empty()){
            newstring.push_back(words);
            words="";
        }
    }
    if(!words.empty()){
        newstring.push_back(words);
    }
    reverse(newstring.begin(),newstring.end());
    string res="";
    for(int i=0;i<newstring.size();i++){
        res+=newstring[i];
        if(i<newstring.size()-1){
            res+=" ";
        }
    }
    return res;
}