#include<bits/stdc++.h>
using namespace std;
int markRow(int i){
    for(int j=0;j<m;j++){
        if(arr[i][j]!=0){
            arr[i][j]==-1;
        }
    }
}
int markCol(int j){
    for(int i=0;i<n;i++){
        if(arr[i][j]!=0){
            arr[i][j]==-1;
        }
    }
}
int setMatrix(int &arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                markRow(i); 
                markCol(j);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int res=setMatrix(arr,n,m);
    return 0;
}