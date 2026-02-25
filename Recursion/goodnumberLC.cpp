#include<bits/stdc++.h>
using namespace std;
long long power(long long x,long long y){
    const long long MOD=1e9+7;
    if(y==0) return 1;
    if(y%2==0){
        return power((x*x)%MOD,y/2);
    }
    else{
        return ((x%MOD)*power(x,y-1)%MOD)%MOD;
    }
}
long long good(long long a,long long b){
    const long long MOD=1e9+7;
    long long evenpow=power(5,a);
    long long oddpow=power(4,b);
    double ans=((evenpow%MOD)*(oddpow%MOD))%MOD;
    return ans;
}
long long goodnum(long long n){
    if(n%2==0){
        return good(n/2,n/2);
    }
    else{
        return good((n/2)+1,n/2);
    }
}
int main(){
    int n;
    cin>>n;
    long long res=goodnum(n);
    cout<<res;
}