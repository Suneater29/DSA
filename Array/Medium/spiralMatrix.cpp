#include<bits/stdc++.h>
using namespace std;
void spiral(vector<vector<int>>&arr,int n,int m){
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    int tne=n*m;
    int count=0;
    while(count<tne){
        for(int j=minc;j<=maxc && count<tne;j++){
            cout<<arr[minr][j];
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<tne;i++){
            cout<<arr[i][maxc];
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tne;j--){
            cout<<arr[maxr][j];
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne;i--){
            cout<<arr[i][minc];
            count++;
        }
        minc++;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows : ";
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
    spiral(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}


