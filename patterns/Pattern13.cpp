#include<bits/stdc++.h>
using namespace std;
void pattern13(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<sum<<" ";
            sum++;
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
        pattern13(n);
        cout<<"\n";
    }
    return 0;
}