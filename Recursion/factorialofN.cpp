#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int i=1;
    while(true){
        int f= fact(i);
        if(f>n) break;
        cout<<f<<" ";
        i++;
    }
    return 0;
}