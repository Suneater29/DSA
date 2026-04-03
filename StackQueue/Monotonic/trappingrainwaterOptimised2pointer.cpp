#include<bits/stdc++.h>
using namespace std;
int trappedwater(vector<int> &arr,int n){
    int volume=0;
    int left=0;
    int right=n-1;
    int maxleft=0;
    int maxright=0;
    while(left<=right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=maxleft){
                maxleft=arr[left];
            }
            else{
                volume+=maxleft-arr[left];
            }
            left++;
        }
        else{
            if(arr[right]>=maxright){
                maxright=arr[right];
            }
            else{
                volume+=maxright-arr[right];
            }
            right--;
        }
    }
    return volume;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=trappedwater(arr,n);
    cout<<ans;
    return 0;
}