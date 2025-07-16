#include<bits/stdc++.h>
using namespace std;
void pattern20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=space;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
        if(i<n){
            space-=2;
        }
        else{
            space+=2;
        }
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
        pattern20(n);
        cout<<"\n";
    }
    return 0;
}