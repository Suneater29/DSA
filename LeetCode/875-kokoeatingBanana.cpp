#include<bits/stdc++.h>
using namespace std;
long long totaltime(vector<int> &arr,int mid){
    long long sum=0;
    for(int i:arr){
        sum+=(i+mid-1)/mid;
    }
    return sum;
}
int koko(vector<int> &arr,int h){
    int maxel=*max_element(arr.begin(),arr.end());
    int low=1;
    int high=maxel;
    int k=maxel;
    while(low<=high){
        int mid=low+((high-low)/2);
        long long totalhours=totaltime(arr,mid);
        if(totalhours<=h){
            k=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h;
    cin>>h;
    int ans=koko(arr,h);
    cout<<ans;
    return 0;
}