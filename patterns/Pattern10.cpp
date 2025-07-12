#include<bits/stdc++.h>
using namespace std;
void pattern10(int n){
    //This method is also correct
    /*for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }*/

    //Striver method --->
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"Number of times pattern is printed : ";
    cin>>t;
    cout<<"Enter the number rows : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern10(n);
        cout<<"\n";
    }
    return 0;
}