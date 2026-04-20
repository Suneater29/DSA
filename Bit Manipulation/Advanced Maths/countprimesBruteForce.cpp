#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
    if(x<=1) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0) return false;
    }
    return true;
}
int primes(int n){
    int cnt=0;
    for(int i=1;i<n;i++){
        if(isprime(i)) cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int res=primes(n);
    cout<<res;
    return 0;
}