#include<bits/stdc++.h>
using namespace std;
double power(double x,int n){
    if(x==1.0 || n==0) return 1;
    long long temp=n;
    if(n<0){
        x=1/x;
        n=-n;
    }
    double ans=1;
    for(long long i=0;i<temp;i++){
        ans=ans*n;
    }
    return ans;
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    double res=power(x,n);
    cout<<res;
    return 0;
}