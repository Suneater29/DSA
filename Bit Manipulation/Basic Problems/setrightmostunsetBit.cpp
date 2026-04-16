#include<bits/stdc++.h>
using namespace std;
int rightunset(int n){
    if((n&(n+1))==0) return n;
    return (n|(n+1));
}
int main(){
    int n;
    cin>>n;
    int ans=rightunset(n);
    cout<<ans;
    return 0;
}