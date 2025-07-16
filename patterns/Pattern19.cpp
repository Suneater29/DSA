#include<bits/stdc++.h>
using namespace std;
void pattern19(int n){
    int space=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        space +=2;
        cout<<"\n";
    }
    space = 2*n-2; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        space -=2;
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
        pattern19(n);
        cout<<"\n";
    }
    return 0;
}