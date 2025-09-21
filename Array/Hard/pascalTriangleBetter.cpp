#include<bits/stdc++.h>
using namespace std;
int combination(int n,int r){
    if(r==n || r==0) return 1;
    int combi=combination(n-1,r-1)+combination(n-1,r);
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