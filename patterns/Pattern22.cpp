#include<bits/stdc++.h>
using namespace std;
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-1)-1-j;
            int down=(2*n-1)-1-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"Number of times pattern is printed : ";
    cin>>t;
    cout<<"Enter the number : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern22(n);
        cout<<"\n";
    }
    return 0;
}