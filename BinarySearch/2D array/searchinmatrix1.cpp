#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&arr,int n,int m, int target){
    int low=0;
    int high=(n*m)-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        int row=mid/m;
        int col=mid%m;
        if(arr[row][col]==target){
            return true;
        }
        else if(arr[row][col]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
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
    cout<<"The matrix is : "<<endl ;
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