#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //numbers 
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int j=2*(n-i);j>0;j--){
            cout<<" ";
        }
        //numbers 
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
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
        pattern12(n);
        cout<<"\n";
    }
    return 0;
}