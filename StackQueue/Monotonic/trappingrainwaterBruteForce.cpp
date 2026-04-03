#include<bits/stdc++.h>
using namespace std;
int trappedwater(vector<int> &arr,int n){
    int volume=0;
    for(int i=0;i<n;i++){
        int maxleft=0;
        int maxright=0;
        for(int j=0;j<=i;j++){
            if(maxleft<arr[j]) maxleft=arr[j];
        }
        for(int j=i;j<n;j++){
            if(maxright<arr[j]) maxright=arr[j];
        }
        volume+=min(maxleft,maxright)-arr[i];
    }
    return volume ;
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