#include<bits/stdc++.h>
using namespace std;
int combi(int n,int r){
    long long res=1;
    for(int i=1;i<r;i++){
        res=res*(n-i);
        res=res/i;
    }
    return res;
}
vector<vector<int>> pascal(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        vector<int>temp;
        for(int j=1;j<=i;j++){
            temp.push_back(combi(i,j));
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    vector<vector<int>>triangle=pascal(n);
    for(auto it: triangle){
        for(auto num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}