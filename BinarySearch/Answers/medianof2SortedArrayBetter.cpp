#include<bits/stdc++.h>
using namespace std;
double median(vector<int>&arr1,int n1,vector<int>&arr2,int n2){
    int n=n1+n2;
    int i=0;
    int j=0;
    int cnt=0;
    int ind2=n/2;
    int ind1=ind2-1;
    int ind1el=-1;
    int ind2el=-1;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(cnt==ind1) ind1el=arr1[i];
            if(cnt==ind2) ind2el=arr1[i];
            i++;
        }
        else{
            if(cnt==ind1) ind1el=arr2[j];
            if(cnt==ind2) ind2el=arr2[j];
            j++;
        }
        cnt++;
    }
    while(i<n1){
        if(cnt==ind1) ind1el=arr1[i];
        if(cnt==ind2) ind2el=arr1[i];
        cnt++;
        i++;
    }
    while(j<n2){
        if(cnt==ind1) ind1el=arr2[j];
        if(cnt==ind2) ind2el=arr2[j];
        cnt++;
        j++;
    }
    if(n%2==1) return (double)ind2el;
    return (ind1el+ind2el)/2.0;
}
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