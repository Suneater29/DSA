#include<bits/stdc++.h>
using namespace std;
int countbit(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        int x=i;
        while(x>0){
            x&=(x-1);
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int ans=countbit(n);
    cout<<ans;
    return 0;
}