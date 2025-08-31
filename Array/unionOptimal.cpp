#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int>&a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>UnionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
        i++;
    }
    while(j<n2){
        if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
        j++;
    }
    return UnionArr;
}
int main(){
    int n1;
    cin>>n1;
    vector<int> a(n1);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    int n2;
    cin>>n2;
    vector<int> b(n2);
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    vector<int>result=sortedArray(a,b);
    for(auto p:result){
        cout<<p<<" ";
    }
    return 0;
}
