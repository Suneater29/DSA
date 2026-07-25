#include<bits/stdc++.h>
using namespace std;
int maxproduct(int n){
    int max1=0;
    int max2=0;
    while(n>0){
        int digit=n%10;
        if(digit>=max1){
            max2=max1;
            max1=digit;
        }
        else if(digit>=max2){
            max2=digit;
        }
        n/=10;
    }
    return max1*max2;
}
int main(){
    int n;
    cin>>n;
    int result=maxproduct(n);
    cout<<result;
    return 0;
}