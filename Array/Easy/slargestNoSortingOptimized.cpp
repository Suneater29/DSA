//OPTMIZED SOLUTION
#include<bits/stdc++.h>
using namespace std;
int secondLarge(vector<int>&arr,int n){
    int largest=arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>largest && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}
int secondSmall(vector<int>&arr,int n){
    int smallest=arr[0];
    int secondS=INT_MAX;
    for(int i=0;i<n;i++){ 
        if(arr[i]<smallest){
            secondS=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secondS){
            secondS=arr[i];
        }
    }
    return secondS;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int secondL=secondLarge(arr,n);
    int secondS=secondSmall(arr,n);
    cout<<secondL<<"\n";
    cout<<secondS;
    return 0;
}

//TC of second largest = o(n)
//TC of second smallest = o(n)