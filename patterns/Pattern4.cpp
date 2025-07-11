#include<bits/stdc++.h>
using namespace std;
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"Number of times pattern is printed : ";
    cin>>t;
    cout<<"enter number of rows : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern4(n);
        cout<<"\n";
    }
    return 0;
}