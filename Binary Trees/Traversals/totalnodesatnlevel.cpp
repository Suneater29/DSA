#include<bits/stdc++.h>
using namespace std;
int totalnodes(int n){
    int total=1;
    for(int i=1;i<n;i++){
        total+=total;
    }
    return total;
}
int main(){
    int n;
    cin>>n;
    int ans=totalnodes(n);
    cout<<ans;
    return 0;
}