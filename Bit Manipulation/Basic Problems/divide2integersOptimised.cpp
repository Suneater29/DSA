#include<bits/stdc++.h>
using namespace std;
int divide(int dividend,int divisor){
    if(dividend==divisor) return 1;
    if(divisor==1) return dividend;
    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
    bool ispos=true;
    if(dividend>=0 && divisor<0){
        ispos=false;
    }
    else if(dividend<0 && divisor>0){
        ispos=false;
    }
    long long divid=dividend;
    divid=abs(divid);
    long long divis=divisor;
    divis=abs(divis);
    long long cnt=0;
    while(divid>=divis){
        long long ans=0;
        while(divid>=(divis<<(ans+1))){
            ans++;
        }
        cnt+=(1<<ans);
        divid-=divis*(1<<ans);
    }
    if(cnt>INT_MAX && ispos){
        return INT_MAX;
    }
    else if(cnt>INT_MAX && !ispos){
        return INT_MIN;
    }
    if(ispos) return cnt;
    else return -1*cnt;
}
int main(){
    int dividend;
    cin>>dividend;
    int divisor;
    cin>>divisor;
    int ans=divide(dividend,divisor);
    cout<<ans;
    return 0;
}