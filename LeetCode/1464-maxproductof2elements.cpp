#include<bits/stdc++.h>
using namespace std;
int maxpro(vector<int> &arr){
    int max1=0;
    int max2=0;
    for(int i:arr){
        if(i>=max1){
            max2=max1;
            max1=i;
        }
        else if(i>max2){
            max2=i;
        }
    }
    return (max1-1)*(max2-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=maxpro(arr);
    cout<<result;
    return 0;
}