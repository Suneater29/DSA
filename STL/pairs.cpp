#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    pair<int,int>a={m,n};
    cout<<a.first<<"\n";
    pair<int,pair<int,int>>b={3,{8,9}};
    cout<<b.second.first<<"\n";
    pair<int,int> arr[]={{4,7},{2,9},{1,5}};
    cout<<arr[2].second;
    return 0;
}