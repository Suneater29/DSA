#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int res=median(arr1,n1,arr2,n2);
    cout<<res;
    return 0;
}