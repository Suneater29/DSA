#include<bits/stdc++.h>
using namespace std;
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"Number of times pattern is printed : ";
    cin>>t;
    cout<<"Enter the number of rows : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern8(n);
        cout<<"\n";
    }
    return 0;
}