#include<bits/stdc++.h>
using namespace std;
double median(vector<int>arr1,int n1, vector<int>&arr2,int n2){
    if(n1>n2) return median(arr2,n2,arr1,n1);
    int size=(n1+n2+1)/2;
    int low=0;
    int high=n1;
    while(low<=high){
        int cut1=(low+high)/2; //act as mid1
        int cut2=size-cut1;    //act as mid2
        int l1=(cut1==0) ? INT_MIN : arr1[cut1-1];
        int r1=(cut1==n1) ? INT_MAX : arr1[cut1];
        int l2=(cut2==0) ? INT_MIN : arr2[cut2-1];
        int r2=(cut2==n2) ? INT_MAX : arr2[cut2];
        if(l1<=r2 && l2<=r1){
            if((n1+n2)%2==0){
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else{
                return (max(l1,l2));
            }
        }
        else if(l1>r2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }
    }
    return 0.0;
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
    double res=median(arr1,n1,arr2,n2);
    cout<<res;
    return 0;
}