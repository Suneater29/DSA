#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&arr,int n,int m,int target){
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        if(arr[row][col]==target){
            return true;
        }
        else if(arr[row][col]>target){
            col--;
        }
        else{
            row++;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cin>>target;
    bool res=search(arr,n,m,target);
    if(res){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}