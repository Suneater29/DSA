#include<bits/stdc++.h>
using namespace std;
// int maximumSeats(int n,vector<vector<int>> &reserved){
//     unordered_map<int,int>mpp;
//     for(auto it:reserved){
//         int row=it[0];
//         int col=it[1];
//         mpp[row]|=(1<<col);
//     }
//     int left=(1<<2)|(1<<3)|(1<<4)|(1<<5);
//     int mid=(1<<4)|(1<<5)|(1<<6)|(1<<7);
//     int right=(1<<6)|(1<<7)|(1<<8)|(1<<9);      
//     int ans=2*(n-mpp.size());
//     for(auto &[row,reserved]:mpp){
//         bool leftAvail=(reserved & left)==0;
//         bool midAvail=(reserved & mid)==0;
//         bool rightAvail=(reserved & right)==0;
//         if(leftAvail && rightAvail) ans+=2;
//         else if(leftAvail || midAvail || rightAvail) ans+=1;
//     }
//     return ans;
// }
int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>>reserved(n+1,vector<int>(11,0));
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=10;j++){
    //         cin>>reserved[i][j];
    //     }
    // }
    // int maxSeats=maximumSeats(n,reserved);
    // cout<<maxSeats;
    cout<<"maximum seat in cinema hall";
    return 0;
}