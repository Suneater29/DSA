#include<bits/stdc++.h>
using namespace std;
int setbit(int n){
    return (n&(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<setbit(n);
    return 0;
}