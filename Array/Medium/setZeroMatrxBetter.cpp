#include<bits/stdc++.h>
using namespace std;
void zeroMatrix(vector<vector<int>>&arr,int n,int m){
    int col[m]={0};
    int row[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                arr[i][j]=0;
            }
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
    zeroMatrix(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}