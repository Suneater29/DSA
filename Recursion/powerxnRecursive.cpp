#include<bits/stdc++.h>
using namespace std;
double mypow(double x,long long num){
    if(num==0 || x==1.0) return 1;
    if(num%2==0){
        return mypow(x*x,num/2);
    }
    else{
        return x*mypow(x,num-1);
    }
}
double power(double x,int n){
    long long num=n;
    if(n<0){
        return (1.0/mypow(x,-1*num));
    }
    else{
        return mypow(x,num);
    }
}
int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    double res=power(x,n);
    cout<<res;
    return 0;
}