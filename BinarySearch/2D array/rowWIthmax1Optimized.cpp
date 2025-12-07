#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&arr,int m,int x){
    int low=0;
    int high=m-1;
    int ans=m;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int max(vector<vector<int>>&arr,int n,int m){
    int max_one=0;
    int ind=-1;
    for(int i=0;i<n;i++){
        int cnt_one=lower_bound(arr[i],m,1);
        int one=m-cnt_one;
        if(one>max_one){
            max_one=one;
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
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int res=max(arr,n,m);
    cout<<res;
    return 0;
}