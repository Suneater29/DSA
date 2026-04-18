#include<bits/stdc++.h>
using namespace std;
int bitodec(string s){
    int n=s.size();
    int pow2=1;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=pow2;
        }
        pow2=pow2*2;
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    int ans=bitodec(s);
    cout<<ans;
    return 0;
}
//TC=O(length of string)
//sC=O(1)