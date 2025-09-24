#include<bits/stdc++.h>
using namespace std;
void nums(int r){
    long long ans=1;
    cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans=ans*(r-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main(){
    int r;
    cout<<"Enter the row number : ";
    cin>>r;
    nums(r);
    return 0;
}