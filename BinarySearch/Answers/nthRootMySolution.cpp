#include<bits/stdc++.h>
using namespace std;
int root(int n,int m){
    int low=0;
    int high=m;
    int ans=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(pow(mid,n)==m) 
            return mid;
        if(pow(mid,n)<m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=root(n,m);
    cout<<ans;
    return 0;
}