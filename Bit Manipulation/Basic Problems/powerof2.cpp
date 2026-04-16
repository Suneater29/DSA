#include<bits/stdc++.h>
using namespace std;
bool power2(int n){
    if((n>0) && ((n&(n-1))==0)) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    bool ans=power2(n);
    cout<<ans;
    return 0;
}