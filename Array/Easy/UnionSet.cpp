//BRUTE FORCE SOLUTION
#include<bits/stdc++.h>
using namespace std;
void Setunion(set<int> &s1,set<int> &s2){
    for(auto val:s1){
        s2.insert(val);
    }
    for(auto val:s2){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    int n1;
    cin>>n1;
    set<int>s1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        s1.insert(x);
    }
    int n2;
    cin>>n2;
    set<int>s2;
    for(int i=0;i<n2;i++){
        int y;
        cin>>y;
        s2.insert(y);
    }
    Setunion(s1,s2);
    return 0;
}