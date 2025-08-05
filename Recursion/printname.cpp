#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<"Arsalan"<<"\n";
    print(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the number of times you want to print name : ";
    cin>>n;
    print(1,n);
    return 0;
}