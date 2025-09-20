#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j], arr[j][i]);
            // int temp=arr[i][j];
            // arr[i][j]=arr[j][i];
            // arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(), arr[i].end());
        // int j=0;
        // int k=n-1;
        // while(j<k){
        //     int temp=arr[i][j];
        //     arr[i][j]=arr[i][k];
        //     arr[i][k]=temp;
        //     j++;
        //     k--;
        // }
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
    rotate(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}