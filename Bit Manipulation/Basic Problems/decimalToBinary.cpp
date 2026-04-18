#include<bits/stdc++.h>
using namespace std;
string dectobi(int n){
    string bi="";
    while(n>=1){
        if(n%2==1) bi+='1';
        else bi+='0'; 
        n=n/2;
    }
    reverse(bi.begin(),bi.end());
    return bi;
}
int main(){
    int n;
    cin>>n;
    string ans=dectobi(n);
    cout<<ans;
    return 0;
}
//TC=O(log2n)
//sC=O(log2n)