#include<bits/stdc++.h>
using namespace std;
int max1(vector<vector<int>>&arr,int n,int m){
    int ind=-1;
    int max=-1;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            cnt+=arr[i][j];
        }
        if(cnt>max){
            max=cnt;
            ind=i;
        }
    }
    return ind;
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
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int res=max1(arr,n,m);
    cout<<res;
    return 0;
}