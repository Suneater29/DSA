#include<bits/stdc++.h>
using namespace std;
void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int point=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch<<" ";
            if(j<point) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cout<<"number of times pattern is printed : ";
    cin>>t;
    cout<<"Enter the number of rows : ";
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern17(n);
        cout<<"\n";
    }
    return 0;
}