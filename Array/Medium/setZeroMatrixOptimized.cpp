#include<bits/stdc++.h>
using namespace std;
void matrix(vector<vector<int>>&arr,int n,int m){
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                if(j!=0){
                    arr[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][0]==0 || arr[0][j]==0){
                arr[i][j]=0;
            }
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<m;j++){
            arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            arr[i][0]=0;
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns : ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    matrix(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}