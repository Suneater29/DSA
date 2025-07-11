#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"number of times pattern is printed : ";
    cin>>t;
    cout<<"enter the number of rows : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern1(n);
        cout<<"\n";
    }
    return 0;
}