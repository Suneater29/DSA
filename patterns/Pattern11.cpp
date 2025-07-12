#include<bits/stdc++.h>
using namespace std;
void pattern11(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            start=0;
        }
        else{
            start=1; 
        }
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
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
        pattern11(n);
        cout<<"\n";
    }
    return 0;
}