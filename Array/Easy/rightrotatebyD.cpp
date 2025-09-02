#include<bits/stdc++.h>
using namespace std;
void rotateRight(int arr[],int n,int d){
    d=d%n;
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+(n-d));
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotateRight(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}