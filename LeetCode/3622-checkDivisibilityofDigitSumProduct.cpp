#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int given=n;
    int sum=0;
    int product=1;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    int total=sum+product;
    if(given%total==0) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    bool ans=check(n);
    cout<<ans;
    return 0;
}