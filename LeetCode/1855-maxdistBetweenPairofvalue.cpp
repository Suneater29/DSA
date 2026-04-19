#include<bits/stdc++.h>
using namespace std;
int maxdistance(vector<int> &arr1,int n,vector<int> &arr2,int m){
    int i=0;
    int j=0;
    int maxdist=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            maxdist=max(maxdist,j-i);
            j++;
        }
        else{
            i++;
        }
    }
    return maxdist;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int result=maxdistance(arr1,n,arr2,m);
    cout<<result;
    return 0;
}