#include<bits/stdc++.h>
using namespace std;
vector<int>manipulation(int n,int i){
    i=i-1;
    vector<int>res;
    int get=(n>>i)&1;
    res.push_back(get);
    int set=n|(1<<i);
    res.push_back(set);
    int clear=n& ~(1<<i);
    res.push_back(clear);
    return res;
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    vector<int>ans=manipulation(n,i);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}