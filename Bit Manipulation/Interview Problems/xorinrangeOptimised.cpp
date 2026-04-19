#include<bits/stdc++.h>
using namespace std;
int inrange(int n){
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    return n;
}
int main(){
    int l;
    cin>>l;
    int r;
    cin>>r;
    int result=inrange(l-1)^inrange(r);
    cout<<result;
    return 0;
}