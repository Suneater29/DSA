#include<bits/stdc++.h>
using namespace std;
int root(int n, int m){
    int low=1;
    int high=m;
    while(low<=high){
        int mid=low+((high-low)/2);
        long long ans=1;
        for(int i=0;i<n;i++){
            ans*=mid;
            if(ans>m) break;
        }
        if(ans==m) return mid;
        if(ans>m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int res=root(n,m);
    cout<<res;
    return 0;
}