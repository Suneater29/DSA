#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int a[256]={0};
    int b[256]={0};
    int n=s1.size();
    for(int i=0;i<n;i++){
        if(a[s1[i]]!=b[s2[i]]){
            cout<<"false";
        }
        a[s1[i]]=i+1;
        b[s2[i]]=i+1;
    }
    cout<<"true";
    return 0;
}