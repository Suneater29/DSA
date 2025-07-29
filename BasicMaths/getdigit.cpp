#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int last;
        last=n%10;
        cout<<last<<"\n";
        n=n/10;
    }
    return 0;
}