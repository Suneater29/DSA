#include<bits/stdc++.h>
using namespace std;
void pattern18(int n){
    for(int i=1;i<=n;i++){
        char ch=64+n;
        for(char j=ch-i+1;j<=ch;j++){
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
        pattern18(n);
        cout<<"\n";
    }
    return 0;
}