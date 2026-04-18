#include<bits/stdc++.h>
using namespace std;
int minbitflip(int start,int goal){
    int num=start^goal;
    int cnt=0;
    // both methods are correct, but second one is more optimisec
    // for(int i=0;i<32;i++){
    //     if(num&(1<<i)) cnt++;
    // }
    while(num){
        num&=(num-1);
        cnt++;
    }
    return cnt;
}
int main(){
    int start;
    cin>>start;
    int goal;
    cin>>goal;
    int minflips=minbitflip(start,goal);
    cout<<minflips;
    return 0;
}