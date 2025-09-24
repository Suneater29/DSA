#include<bits/stdc++.h>
using namespace std;
vector<int>generateRow(int n){
    long long res=1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int i=1;i<n;i++){
        res=res*(n-i);
        res=res/i;
        ansRow.push_back(res);
    }
    return ansRow;
}
vector<vector<int>>pascal(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    vector<vector<int>>triangle=pascal(n);
    for(auto it : triangle){
        for(auto num: it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}