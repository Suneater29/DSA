#include<bits/stdc++.h>
using namespace std;
int combi(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int r;
    cout<<"Enter the row number : ";
    cin>>r;
    for(int i=1;i<=r;i++){
        cout<<combi(r-1,i-1)<<" ";
    }
    return 0;
}