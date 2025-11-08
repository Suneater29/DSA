#include<bits/stdc++.h>
using namespace std;
int root(int n){
    long long low=1;
    long long high=n;
    long long ans=0;
    if(n<2) return n;
    while(low<=high){
        long long mid=low+((high-low)/2);
        if(mid*mid<=n){
            ans=mid;
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
    int res=root(n);
    cout<<res;
    return 0;
}