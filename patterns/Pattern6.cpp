#include<bits/stdc++.h>
using namespace std;
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
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
        pattern6(n);
        cout<<"\n";
    }
    return 0;
}