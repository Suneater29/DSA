#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<2) return 1;
    int fact=n*factorial(n-1);
    return fact;
}
int combination(int n, int r){
    int combi=factorial(n)/(factorial(r)*factorial(n-r));
    return combi;
}  
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int res=combination(i,j);
            cout<<res<<" ";
        }
        cout<<endl;
    }
    return 0;
}