#include<bits/stdc++.h>
using namespace std;
long long num(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int row;
    cout<<"Enter the row : ";
    cin>>row;
    int column;
    cout<<"Enter the column : ";
    cin>>column;
    cout<<num(row-1,column-1);
    return 0;
}