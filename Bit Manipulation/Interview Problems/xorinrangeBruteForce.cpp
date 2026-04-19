#include<bits/stdc++.h>
using namespace std;
int inrange(int l,int r){
    int ans=0;
    for(int i=l;i<=r;i++){
        ans^=i;
    }
    return ans;
}
int main(){
    int l;
    cin>>l;
    int r;
    cin>>r;
    int result=inrange(l,r);
    cout<<result;
    return 0;
}