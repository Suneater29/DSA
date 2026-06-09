#include<bits/stdc++.h>
using namespace std;
int mincoins(int value){
    vector<int>coins={1,2,5,10};
    int n=coins.size();
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        while(value>=coins[i]){
            value-=coins[i];
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int value;
    cin>>value;
    int ans=mincoins(value);
    cout<<ans;
    return 0;
}