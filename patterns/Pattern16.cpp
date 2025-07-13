#include<bits/stdc++.h>
using namespace std;
void pattern16(int n){
    for(int i=1;i<=n;i++){
        int num=64;
        char ch=char(num + i);
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
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
        pattern16(n);
        cout<<"\n";
    }
}