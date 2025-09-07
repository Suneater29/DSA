// //BRUTE FORCE METHOD 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int second;
    int largest=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            second=arr[i];
            break;
        }
    }
    cout<<second;
    return 0;
}
//TC = O(n+nlogn)