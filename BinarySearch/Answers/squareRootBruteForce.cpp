#include<bits/stdc++.h>
using namespace std;
int root(int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int num=root(n);
    cout<<num;
    return 0;
}